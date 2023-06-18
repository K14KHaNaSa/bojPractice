#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, c, d, e;
	cin >> n;
	int able[10];
	for (int i = 0; i < 10; i++) {
		able[i] = 0;
	}
	// ab, ac, ad, ae, bc, bd, be, cd, ce, de
	while (n--) {
		cin >> a >> b >> c >> d >> e;
		if (a == 1 && b == 1) {
			able[0]++;
		}
		if (a == 1 && c == 1) {
			able[1]++;
		}
		if (a == 1 && d == 1) {
			able[2]++;
		}
		if (a == 1 && e == 1) {
			able[3]++;
		}
		if (b == 1 && c == 1) {
			able[4]++;
		}
		if (b == 1 && d == 1) {
			able[5]++;
		}
		if (b == 1 && e == 1) {
			able[6]++;
		}
		if (c == 1 && d == 1) {
			able[7]++;
		}
		if (c == 1 && e == 1) {
			able[8]++;
		}
		if (d == 1 && e == 1) {
			able[9]++;
		}
	}
	int answer = 0;
	int ableweek = 0;
	for (int i = 0; i < 10; i++) {
		if (able[i] > answer) {
			answer = able[i];
			ableweek = i;
		}
	}
	cout << answer << "\n";
	if (ableweek == 0) {
		cout << "1 1 0 0 0";
	}
	if (ableweek == 1) {
		cout << "1 0 1 0 0";
	}
	if (ableweek == 2) {
		cout << "1 0 0 1 0";
	}
	if (ableweek == 3) {
		cout << "1 0 0 0 1";
	}
	if (ableweek == 4) {
		cout << "0 1 1 0 0";
	}
	if (ableweek == 5) {
		cout << "0 1 0 1 0";
	}
	if (ableweek == 6) {
		cout << "0 1 0 0 1";
	}
	if (ableweek == 7) {
		cout << "0 0 1 1 0";
	}
	if (ableweek == 8) {
		cout << "0 0 1 0 1";
	}
	if (ableweek == 9) {
		cout << "0 0 0 1 1";
	}
}