#include <iostream>
using namespace std;

int sm[4][2]; // simul ( score , p_num)

void simul_sort(int i) {
	int temp1 = sm[i][0];
	int temp2 = sm[i][1];
	sm[i][0] = sm[i + 1][0];
	sm[i][1] = sm[i + 1][1];
	sm[i + 1][0] = temp1;
	sm[i + 1][1] = temp2;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, m, rk, sc;
	int s[4] = { 0, 0, 0, 0 }; // basic score
	int nowrank[4];
	int r[4][4];
	for (int i = 0; i < 4; i++) { // ranked each game
		for (int j = 0; j < 4; j++)
			r[i][j] = 0;
	}
	cin >> n >> k >> m;
	while (n--) {
		for (int i = 0; i < 4; i++) {
			cin >> nowrank[i];
			r[nowrank[i] - 1][i]++;
		}
		for (int i = 0; i < 4; i++) {
			cin >> sc;
			s[nowrank[i] - 1] += sc;
		}
	}
	for (int d1 = 0; d1 <= 100; d1++) {
		for (int d2 = -100; d2 <= d1; d2++) {
			for (int d3 = -100; d3 <= d2; d3++) {
				int d4 = (d1 + d2 + d3) * -1;
				if ((d1 >= d2) && (d2 >= d3) && (d3 >= d4) && (d4 >= -100)) {
					for (int i = 0; i < 4; i++) {
						sm[i][0] = s[i];
						sm[i][0] += r[i][0] * d1;
						sm[i][0] += r[i][1] * d2;
						sm[i][0] += r[i][2] * d3;
						sm[i][0] += r[i][3] * d4;
						sm[i][1] = i + 1;
					}
					for (int i = 0; i < 4; i++) {
						for (int j = 0; j < 3; j++) {
							if (sm[j][0] < sm[j + 1][0]) {
								simul_sort(j);
							}
							else if ((sm[j][0] == sm[j + 1][0]) &&
								(sm[j][1] > sm[j + 1][1])) {
								simul_sort(j);
							}
						}
					}
					if (sm[m - 1][1] == k) {
						cout << d1 << ' ' << d2 << ' ' << d3 << ' ' << d4;
						return 0;
					}
				}
			}
		}
	}
	cout << -1;
}