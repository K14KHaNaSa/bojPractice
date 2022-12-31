#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, epoint;
	char tcchar;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> epoint;
		tcchar = cin.get();
		queue<char> tcline;
		tcchar = cin.get();
		while (tcchar != '\n') {
			tcline.push(tcchar);
			tcchar = cin.get();
		}
		int pcounter = 1;
		while (!tcline.empty()) {
			if (pcounter != epoint) {
				cout << tcline.front();
			}
			tcline.pop();
			pcounter++;
		}
		cout << "\n";
	}
}