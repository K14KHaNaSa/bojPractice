#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	unsigned int m, x;
	cin >> m;
	bool s[21];
	string order;
	for (int i = 0; i < m; i++) {
		cin >> order;
		if (order == "add") {
			cin >> x;
			s[x] = true;
		}
		else if (order == "remove") {
			cin >> x;
			s[x] = false;
		}
		else if (order == "check") {
			cin >> x;
			if (s[x] == true) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (order == "toggle") {
			cin >> x;
			if (s[x] == true) {
				s[x] = false;
			}
			else {
				s[x] = true;
			}
		}
		else if (order == "all") {
			for (int j = 1; j <= 20; j++) {
				s[j] = true;
			}
		}
		else if (order == "empty") {
			for (int j = 1; j <= 20; j++) {
				s[j] = false;
			}
		}
	}
}