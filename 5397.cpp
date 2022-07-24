#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	stack<char> stkl;
	stack<char> stkr;
	char order;
	bool firstLine = false;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		order = cin.get();
		while (order != '\n') {
			//order = cin.get();
			if (order == '<') {
				if (!stkl.empty()) {
					stkr.push(stkl.top());
					stkl.pop();
				}
			}
			else if (order == '>') {
				if (!stkr.empty()) {
					stkl.push(stkr.top());
					stkr.pop();
				}
			}
			else if (order == '-') {
				if (!stkl.empty()) {
					stkl.pop();
				}
			}
			else if (order == '\n') {
				break;
			}
			else {
				stkl.push(order);
			}
			order = cin.get();
		}

		while (!stkl.empty()) {
			stkr.push(stkl.top());
			stkl.pop();
		}
		while (!stkr.empty()) {
			cout << stkr.top();
			stkr.pop();
		}
		if (i > 0) { cout << "\n"; }
	}
}