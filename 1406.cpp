#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, cursor;
	stack<char> stkl;
	stack<char> stkr;
	char str, order, ps;
	cin.get(str);
	while (str != '\n') {
		stkl.push(str);
		cin.get(str);
	}
	cin >> n;
	int stksz;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == 'L') {
			if (!stkl.empty()) {
				stkr.push(stkl.top());
				stkl.pop();
			}
		}
		else if (order == 'D') {
			if (!stkr.empty()) {
				stkl.push(stkr.top());
				stkr.pop();
			}
		}
		else if (order == 'B') {
			if (!stkl.empty()) {
				stkl.pop();
			}
		}
		else if (order == 'P') {
			cin >> ps;
			stkl.push(ps);
		}
	}
	while (!stkl.empty()) {
		stkr.push(stkl.top());
		stkl.pop();
	}
	while (!stkr.empty()) {
		cout << stkr.top();
		stkr.pop();
	}
}