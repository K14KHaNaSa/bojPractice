#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> s(n);
	char c;
	c = cin.get();
	for (int i = 0; i < n; i++) {
		c = cin.get();
		s[i] = int(c);
	}
	bool back = false;
	bool backa = false;
	bool backaa = false;
	char backchar;
	int remain = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (!back) {
			if (s[i] != 65 && s[i] != 69 && s[i] != 73 && s[i] != 79 && s[i] != 85) {
				back = true;
				backchar = char(s[i]);
			}
		}
		else if (back && !backa) {
			if (s[i] == 65) {
				backa = true;
			}
		}
		else if (back && backa && !backaa) {
			if (s[i] == 65) {
				backaa = true;
				remain = i;
				break;
			}
		}
	}
	if (remain >= m - 3 && back && backa && backaa) {
		cout << "YES\n";
		for (int i = 0; i < m - 3; i++) {
			cout << char(s[i]);
		}
		cout << "AA" << backchar;
	}
	else {
		cout << "NO";
	}
}