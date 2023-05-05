#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char rcc;
	bool rvs = false;
	rcc = cin.get();
	stack<char> stk;
	while (rcc != EOF) {
		if (rcc == '(') {
			rvs = true;
		}
		else if (rcc==')') {
			rvs = false;
			while (!stk.empty()) {
				cout << stk.top();
				stk.pop();
			}
		}
		else if (rvs) {
			stk.push(rcc);
		}
		else {
			cout << rcc;
		}
		rcc = cin.get();
	}
}