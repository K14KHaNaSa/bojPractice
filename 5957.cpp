#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, c, d;
	stack<int> bessie;
	stack<int> canmuu;
	stack<int> answer;
	cin >> n;
	while (n > 0) {
		bessie.push(n);
		n--;
	}
	while (cin >> c >> d) {
		if (c == 1) {
			while (d--) {
				canmuu.push(bessie.top());
				bessie.pop();
			}
		}
		else if (c == 2) {
			while (d--) {
				answer.push(canmuu.top());
				canmuu.pop();
			}
		}
	}
	while (!answer.empty()) {
		cout << answer.top() << "\n";
		answer.pop();
	}
}