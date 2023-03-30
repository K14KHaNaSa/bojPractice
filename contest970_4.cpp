#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h1, w1, h2, w2;
	char coin;
	cin >> h1 >> w1;
	int totalcoin = 0;
	vector<vector<bool>> before(h1, vector<bool>(w1));
	for (int i = 0; i < h1; i++) {
		coin = cin.get();
		for (int j = 0; j < w1; j++) {
			coin = cin.get();
			if (coin == 'O') {
				before[i][j] = true;
				totalcoin++;
			}
		}
	}
	cin >> h2 >> w2;
	vector<vector<bool>> after(h2, vector<bool>(w2));
	for (int i = 0; i < h2; i++) {
		coin = cin.get();
		for (int j = 0; j < w2; j++) {
			coin = cin.get();
			if (coin == 'O') {
				after[i][j] = true;
			}
		}
	}
	vector<vector<bool>> newmap(h1 * 2 + h2, vector<bool>(w1 * 2 + w2));
	for (int i = 0; i < h2; i++) {
		for (int j = 0; j < w2; j++) {
			newmap[h1 + i][w1 + j] = after[i][j];
		}
	}
	//search
	int answer = 101;
	for (int i = 0; i <= h1 + h2; i++) {
		for (int j = 0; j <= w1 + w2; j++) {
			// (i, j) = search start point
			int staycoin = 0;
			for (int u = 0; u < h1; u++) {
				for (int v = 0; v < w1; v++) {
					if (before[u][v] && newmap[i + u][j + v]) {
						staycoin++;
					}
				}
			}
			answer = min(answer, totalcoin - staycoin);
		}
	}
	cout << answer;
}