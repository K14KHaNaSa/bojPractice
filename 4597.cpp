#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char npt;
	queue<int> bstring;
	cin >> npt;
	bool odd = false;
	while (npt != '#') {
		if (npt == '1') {
			bstring.push(1);
			if (!odd) {
				odd = true;
			}
			else {
				odd = false;
			}
		}
		if (npt == '0') {
			bstring.push(0);
		}
		if (npt == 'e') {
			if (odd) {
				bstring.push(1);
				while (!bstring.empty()) {
					cout << bstring.front();
					bstring.pop();
				}
				cout << "\n";
			}
			else {
				bstring.push(0);
				while (!bstring.empty()) {
					cout << bstring.front();
					bstring.pop();
				}
				cout << "\n";
			}
			odd = false;
		}
		if (npt == 'o') {
			if (!odd) {
				bstring.push(1);
				while (!bstring.empty()) {
					cout << bstring.front();
					bstring.pop();
				}
				cout << "\n";
			}
			else {
				bstring.push(0);
				while (!bstring.empty()) {
					cout << bstring.front();
					bstring.pop();
				}
				cout << "\n";
			}
			odd = false;
		}
		cin >> npt;
	}
}