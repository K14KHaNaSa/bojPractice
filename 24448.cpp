#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q;
	cin >> q;
	string npt;
	stack<string> lib;
	while (q--) {
		cin >> npt;
		if (npt != "READ") {
			lib.push(npt);
		}
		else {
			cout << lib.top() << '\n';
			lib.pop();
		}
	}
}