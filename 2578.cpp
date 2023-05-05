#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int bingo[25][2]; // v h
	int hor[5];
	int ver[5];
	int n, answer;
	for (int i = 0; i < 5; i++) {
		hor[i] = 0;
		ver[i] = 0;
		for (int j = 0; j < 5; j++) {
			cin >> n;
			bingo[n - 1][0] = i;
			bingo[n - 1][1] = j;
		}
	}
	int bline = 0;
	int slash = 0; // "/"
	int bslash = 0; // "\"
	bool finish = false;
	for (int i = 1; i < 26; i++) {
		cin >> n;
		ver[bingo[n - 1][0]]++;
		hor[bingo[n - 1][1]]++;
		if (bingo[n - 1][0] == bingo[n - 1][1]) {
			bslash++;
			if (bslash == 5) {
				bline++;
			}
		}
		if (bingo[n - 1][0] + bingo[n - 1][1] == 4) {
			slash++;
			if (slash == 5) {
				bline++;
			}
		}
		if (ver[bingo[n - 1][0]] == 5) {
			bline++;
		}
		if (hor[bingo[n - 1][1]] == 5) {
			bline++;
		}
		if (!finish && bline > 2) {
			answer = i;
			finish = true;
		}
	}
	cout << answer;
}