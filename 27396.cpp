#include <iostream>
using namespace std;

int s[100000];
int changechar[52];
void creset() {
	for (int i = 0; i < 26; i++) {
		changechar[i] = 65 + i;
	}
	//대문자 65~90
	for (int i = 26; i < 52; i++) {
		changechar[i] = 71 + i;
	}
	//소문자 97~122
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, n, order;
	char f, t;
	a = cin.get();
	int slength = 0;
	while (a != 32) {
		s[slength] = a;
		slength++;
		a = cin.get();
	}
	cin >> n;
	creset();
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == 1) {
			cin >> f >> t;
			if (f != t) {
				for (int j = 0; j < 52; j++) {
					if (changechar[j] == int(f)) {
						changechar[j] = int(t);
					}
				}
			}
		}
		else if (order == 2) {
			for (int j = 0; j < slength; j++) {
				if (int(s[j]) >= 65 && int(s[j] <= 90)) {
					s[j] = changechar[s[j] - 65];
				}
				else if (int(s[j]) >= 97 && int(s[j] <= 122)) {
					s[j] = changechar[s[j] - 71];
				}
				cout << char(s[j]);
			}
			cout << "\n";
			creset();
		}
	}
}