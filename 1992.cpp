#include <iostream>
using namespace std;

int img[64][64];

void printer(int sq, int luu, int luv, int rdu, int rdv) { // sq size , leftup , rightdown ( lu ~ rd-1 )
	// bw finder
	int points = 0;
	for (int i = luu; i < rdu; i++) {
		for (int j = luv; j < rdv; j++) {
			points += img[i][j];
		}
	}
	if (points == 0) {
		cout << "0";
	}
	else if (points == sq * sq) {
		cout << "1";
	}
	else {
		cout << "(";
		printer(sq / 2, luu, luv, luu + sq / 2, luv + sq / 2);
		printer(sq / 2, luu, luv + sq / 2, luu + sq / 2, rdv);
		printer(sq / 2, luu + sq / 2, luv, rdu, luv + sq / 2);
		printer(sq / 2, luu + sq / 2, luv + sq / 2, rdu, rdv);
		cout << ")";
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char bw;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bw = cin.get();
		for (int j = 0; j < n; j++) {
			bw = cin.get();
			if (bw == '1') {
				img[i][j] = 1;
			}
			else {
				img[i][j] = 0;
			}
		}
	}
	printer(n, 0, 0, n, n);
}