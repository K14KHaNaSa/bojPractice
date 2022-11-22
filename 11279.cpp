#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, x;
	priority_queue<int> hp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (hp.empty()) {
				cout << "0\n";
			}
			else {
				cout << hp.top() << "\n";
				hp.pop();
			}
		}
		else {
			hp.push(x);
		}
	}
}