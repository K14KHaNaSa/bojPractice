#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int, vector<int>, greater<int>> plus;
	priority_queue<int, vector<int>, greater<int>> minus;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > 0) {
			plus.push(a);
		}
		else if (a < 0) {
			minus.push(a * -1);
		}
		else {
			if (plus.empty() && minus.empty()) {
				cout << 0 << "\n";
			}
			else if (plus.empty() && !minus.empty()) {
				cout << minus.top() * -1 << "\n";
				minus.pop();
			}
			else if (minus.empty() && !plus.empty()) {
				cout << plus.top() << "\n";
				plus.pop();
			}
			else {
				if (plus.top() < minus.top()) {
					cout << plus.top() << "\n";
					plus.pop();
				}
				else {
					cout << minus.top() * -1 << "\n";
					minus.pop();
				}
			}
		}
	}
}