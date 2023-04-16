#include <iostream>
using namespace std;

int answer[22][2];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/* "TLE when this process activated"
	for (int n = 22; n > 0; n--) {
		unsigned long long int numerator = 0;
		unsigned long long int denominator = 1;
		for (unsigned long long int i = 1; i < n; i++) {
			numerator = numerator * (n - i) + (i * denominator);
			denominator = denominator * (n - i);
			for (unsigned long long int j = denominator; j > 0; j--) {
				if (numerator % j == 0 && denominator % j == 0) {
					numerator /= j;
					denominator /= j;
				}
			}
		}
		answer[n - 1][0] = numerator;
		answer[n - 1][1] = denominator;
	}
	int n;
	while (cin >> n) {
		if (n < 3) {
			cout << answer[n - 1][0] / answer[n - 1][1] + n << "\n";
		}
		else {
			int leftsize = 0;
			int nnum = answer[n - 1][0] / answer[n - 1][1] + n;
			while (nnum > 0) {
				nnum /= 10;
				leftsize++;
			}
			int denomsize = 0;
			int dnum = answer[n - 1][1];
			while (dnum > 0) {
				dnum /= 10;
				denomsize++;
			}
			for (int i = 0; i <= leftsize; i++) {
				cout << " ";
			}
			cout << answer[n - 1][0] % answer[n - 1][1] << "\n";
			cout << answer[n - 1][0] / answer[n - 1][1] + n << " ";
			for (int i = 0; i < denomsize; i++) {
				cout << "-";
			}
			cout << "\n";
			for (int i = 0; i <= leftsize; i++) {
				cout << " ";
			}
			cout << answer[n - 1][1] << "\n";
			cout << answer[n - 1][0] << " " << answer[n - 1][1] << "\n";
		}
	}
	/*	answer table
		1 = 0 / 1
		2 = 1 / 1
		3 = 5 / 2
		4 = 13 / 3
		5 = 77 / 12
		6 = 87 / 10
		7 = 223 / 20
		8 = 481 / 35
		9 = 4609 / 280
		10 = 4861 / 252
		11 = 55991 / 2520
		12 = 58301 / 2310
		13 = 785633 / 27720
		14 = 811373 / 25740
		15 = 835397 / 24024
		16 = 1715839 / 45045
		17 = 29889983 / 720720
		18 = 30570663 / 680680
		19 = 197698279 / 4084080
		20 = 201578155 / 3879876
		21 = 41054655 / 739024
		22 = 13920029 / 235144
	*/
	answer[0][0] = 0; answer[0][1] = 1;
	answer[1][0] = 1; answer[1][1] = 1;
	answer[2][0] = 5; answer[2][1] = 2;
	answer[3][0] = 13; answer[3][1] = 3;
	answer[4][0] = 77; answer[4][1] = 12;
	answer[5][0] = 87; answer[5][1] = 10;
	answer[6][0] = 223; answer[6][1] = 20;
	answer[7][0] = 481; answer[7][1] = 35;
	answer[8][0] = 4609; answer[8][1] = 280;
	answer[9][0] = 4861; answer[9][1] = 252;
	answer[10][0] = 55991; answer[10][1] = 2520;
	answer[11][0] = 58301; answer[11][1] = 2310;
	answer[12][0] = 785633; answer[12][1] = 27720;
	answer[13][0] = 811373; answer[13][1] = 25740;
	answer[14][0] = 835397; answer[14][1] = 24024;
	answer[15][0] = 1715839; answer[15][1] = 45045;
	answer[16][0] = 29889983; answer[16][1] = 720720;
	answer[17][0] = 30570663; answer[17][1] = 680680;
	answer[18][0] = 197698279; answer[18][1] = 4084080;
	answer[19][0] = 201578155; answer[19][1] = 3879876;
	answer[20][0] = 41054655; answer[20][1] = 739024;
	answer[21][0] = 13920029; answer[21][1] = 235144;
	int n;
	while (cin >> n) {
		if (n < 3) {
			cout << answer[n - 1][0] / answer[n - 1][1] + n << "\n";
		}
		else {
			int leftsize = 0;
			int nnum = answer[n - 1][0] / answer[n - 1][1] + n;
			while (nnum > 0) {
				nnum /= 10;
				leftsize++;
			}
			int denomsize = 0;
			int dnum = answer[n - 1][1];
			while (dnum > 0) {
				dnum /= 10;
				denomsize++;
			}
			for (int i = 0; i <= leftsize; i++) {
				cout << " ";
			}
			cout << answer[n - 1][0] % answer[n - 1][1] << "\n";
			cout << answer[n - 1][0] / answer[n - 1][1] + n << " ";
			for (int i = 0; i < denomsize; i++) {
				cout << "-";
			}
			cout << "\n";
			for (int i = 0; i <= leftsize; i++) {
				cout << " ";
			}
			cout << answer[n - 1][1] << "\n";
		}
	}
}