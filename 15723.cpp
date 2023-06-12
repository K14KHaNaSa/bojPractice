#include <iostream>
using namespace std;

bool aisb[26][26];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	char a, i, s, b; // a = 97 / z = 122
	cin >> n;
	while (n--) {
		cin >> a >> i >> s >> b;
		aisb[int(a) - 97][int(b) - 97] = true;
	}
	for (int k = 0; k < 26; k++) {
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < 26; j++) {
				if (aisb[i][k] && aisb[k][j]) {
					aisb[i][j] = true;
				}
			}
		}
	}
	cin >> m;
	while (m--) {
		cin >> a >> i >> s >> b;
		if (aisb[int(a) - 97][int(b) - 97]) {
			cout << "T\n";
		}
		else {
			cout << "F\n";
		}
	}
}