#include <iostream>
using namespace std;

int lcs[100][100][100];
char first[100];
char second[100];
char third[100];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char chf, chs, cht;
	int f = 0;
	int s = 0;
	int t = 0;
	chf = cin.get();
	while (chf != '\n') {
		first[f] = chf;
		f++;
		chf = cin.get();
	}
	chs = cin.get();
	while (chs != '\n') {
		second[s] = chs;
		s++;
		chs = cin.get();
	}
	cht = cin.get();
	while (cht != '\n') {
		third[t] = cht;
		t++;
		cht = cin.get();
	}
	//fst 0,0,0
	if (first[0] == second[0] && first[0] == third[0]) {
		lcs[0][0][0] = 1;
	}
	else {
		lcs[0][0][0] = 0;
	}
	//t line
	for (int i = 1; i < t; i++) {
		if (first[0] == second[0] && first[0] == third[i]) {
			lcs[0][0][i] = 1;
		}
		else {
			lcs[0][0][i] = lcs[0][0][i - 1];
		}
	}
	//s line
	for (int i = 1; i < s; i++) {
		if (first[0] == second[i] && first[0] == third[0]) {
			lcs[0][i][0] = 1;
		}
		else {
			lcs[0][i][0] = lcs[0][i - 1][0];
		}
	}
	//f line
	for (int i = 1; i < f; i++) {
		if (first[i] == second[0] && first[i] == third[0]) {
			lcs[i][0][0] = 1;
		}
		else {
			lcs[i][0][0] = lcs[i - 1][0][0];
		}
	}
	//f=0 side
	for (int i = 1; i < s; i++) {
		for (int j = 1; j < t; j++) {
			if (first[0] == second[i] && first[0] == third[j]) {
				lcs[0][i][j] = 1;
			}
			else {
				lcs[0][i][j] = max(lcs[0][i - 1][j], lcs[0][i][j - 1]);
			}
		}
	}
	//s=0 side
	for (int i = 1; i < f; i++) {
		for (int j = 1; j < t; j++) {
			if (first[i] == second[0] && first[i] == third[j]) {
				lcs[i][0][j] = 1;
			}
			else {
				lcs[i][0][j] = max(lcs[i - 1][0][j], lcs[i][0][j - 1]);
			}
		}
	}
	//t=0 side
	for (int i = 1; i < f; i++) {
		for (int j = 1; j < s; j++) {
			if (first[i] == second[j] && first[i] == third[0]) {
				lcs[i][j][0] = 1;
			}
			else {
				lcs[i][j][0] = max(lcs[i - 1][j][0], lcs[i][j - 1][0]);
			}
		}
	}
	//inner
	for (int i = 1; i < f; i++) {
		for (int j = 1; j < s; j++) {
			for (int k = 1; k < t; k++) {
				if (first[i] == second[j] && first[i] == third[k]) {
					lcs[i][j][k] = lcs[i - 1][j - 1][k - 1] + 1;
				}
				else {
					lcs[i][j][k] = max(lcs[i][j][k - 1], max(lcs[i][j - 1][k], lcs[i - 1][j][k]));
				}
			}
		}
	}
	cout << lcs[f - 1][s - 1][t - 1];
}