#include <iostream>
#include <cmath>
using namespace std;

int n, answer;
int field[10][10];
int seed[3][2];

void bt(int seedcount, int arrayno) {
	if (seedcount > 1) {
		int fu, fv, su, sv, tu, tv; // 1st u v / 2nd u v / 3rd u v
		fu = seed[0][0];
		fv = seed[0][1];
		su = seed[1][0];
		sv = seed[1][1];
		tu = seed[2][0];
		tv = seed[2][1];
		int cst = 0;
		cst += field[fu][fv] + field[fu - 1][fv] + field[fu + 1][fv] + field[fu][fv - 1] + field[fu][fv + 1];
		cst += field[su][sv] + field[su - 1][sv] + field[su + 1][sv] + field[su][sv - 1] + field[su][sv + 1];
		cst += field[tu][tv] + field[tu - 1][tv] + field[tu + 1][tv] + field[tu][tv - 1] + field[tu][tv + 1];
		answer = min(answer, cst);
	}
	else {
		for (int i = 1; i < n - 1; i++) {
			for (int j = 1; j < n - 1; j++) {
				if (seedcount == 0) {
					if (abs(seed[0][0] - i) + abs(seed[0][1] - j) > 2 && i * n + j > arrayno) {
						seed[1][0] = i;
						seed[1][1] = j;
						bt(1, i * n + j);
					}
				}
				else if (seedcount == 1) {
					if (abs(seed[0][0] - i) + abs(seed[0][1] - j) > 2 &&
						abs(seed[1][0] - i) + abs(seed[1][1] - j) > 2 && i * n + j > arrayno) {
						seed[2][0] = i;
						seed[2][1] = j;
						bt(2, i* n + j);
					}
				}
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	answer = 300000;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> field[i][j];
		}
	}
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			seed[0][0] = i;
			seed[0][1] = j;
			bt(0, i * n + j);
		}
	}
	cout << answer;
}