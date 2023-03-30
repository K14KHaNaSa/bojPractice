#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char udpc;
	int u = 0;
	int d = 0;
	int p = 0;
	int c = 0;
	udpc = cin.get();
	while (udpc != EOF) {
		if (udpc == 'U') {
			u++;
		}
		else if (udpc == 'D') {
			d++;
		}
		else if (udpc == 'P') {
			p++;
		}
		else if (udpc == 'C') {
			c++;
		}
		udpc = cin.get();
	}
	if (u + c > (d + p + 1) / 2) {
		cout << "U";
	}
	if (d > 0 || p > 0) {
		cout << "DP";
	}
}