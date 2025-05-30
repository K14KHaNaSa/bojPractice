#include <iostream>
using namespace std;

int lft(string a) {
	if (a == "1") {
		return 0;
	}
	if (a == "2") {
		return 1;
	}
	if (a == "3") {
		return 2;
	}
	if (a == "4") {
		return 3;
	}
	if (a == "5") {
		return 4;
	}
	if (a == "6") {
		return 5;
	}
	if (a == "7") {
		return 6;
	}
	if (a == "8") {
		return 7;
	}
	if (a == "9") {
		return 8;
	}
}

int rgt(string a) {
	if (a == "m")
		return 0;
	if (a == "p") {
		return 9;
	}
	if (a == "s") {
		return 18;
	}
	if (a == "z") {
		return 27;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p[34];
	int n;
	string m;
	int idx;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < 34; i++)
		p[i] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> m;
		idx = 0;
		idx += lft(m.substr(0, 1));
		idx += rgt(m.substr(1, 1));
		p[idx]++;
		if (p[idx] > 4) {
			ans = i;
			break;
		}
	}
	cout << ans;
}