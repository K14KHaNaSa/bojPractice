#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, psh;
	stack<int> stk;
	string order;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push") {
			cin >> psh;
			stk.push(psh);
		}
		else if (order == "pop") {
			if (stk.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << stk.top() << "\n";
				stk.pop();
			}
		}
		else if (order == "size") {
			cout << stk.size() << "\n";
		}
		else if (order == "empty") {
			if (stk.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (order == "top") {
			if (stk.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << stk.top() << "\n";
			}
		}
	}
}