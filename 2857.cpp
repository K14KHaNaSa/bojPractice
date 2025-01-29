#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	bool fbi = false;
	for (int i = 1; i < 6; i++) {
		cin >> s;
		if (s.length() < 3)
			continue;
		for (int j = 0; j < s.length() - 2; j++) {
			if (s.substr(j, 3) == "FBI") {
				cout << i << ' ';
				fbi = true;
				break;
			}
		}
	}
	if (!fbi)
		cout << "HE GOT AWAY!";
}