#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	stack<char> stk;
	int n;
	char ab;
	int good = 0;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		ab = cin.get();
		while (ab != '\n') {
			if (ab == 'A') {
				if (!stk.empty() && stk.top() == 'A') {
					stk.pop();
				}
				else {
					stk.push('A');
				}
			}
			else if (ab == 'B') {
				if (!stk.empty() && stk.top() == 'B') {
					stk.pop();
				}
				else {
					stk.push('B');
				}
			}
			ab = cin.get();
		}
		ab = ' ';
		if (!stk.empty()) {
			while (!stk.empty()) {
				stk.pop();
			}
		}
		else {
			good++;
		}
	}
	cout << good - 1;
}