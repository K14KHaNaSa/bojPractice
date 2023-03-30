#include <iostream>
#include <vector>
using namespace std;

int map[9][9];
int blank[81][2]; // u, v
int zeros = 0;
bool finished = false;

void fill(int filledzero) {
	if (filledzero == zeros) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << map[i][j];
			}
			cout << "\n";
		}
		finished = true;
	}
	else if (!finished) {
		int u = blank[filledzero][0];
		int v = blank[filledzero][1];
		vector<bool> availnums(10);
		for (int mapu = 0; mapu < 9; mapu++) {
			availnums[map[mapu][v]] = true;
		}
		for (int mapv = 0; mapv < 9; mapv++) {
			availnums[map[u][mapv]] = true;
		}
		for (int squ = 3 * (u / 3); squ < 3 + 3 * (u / 3); squ++) {
			for (int sqv = 3 * (v / 3); sqv < 3 + 3 * (v / 3); sqv++) {
				availnums[map[squ][sqv]] = true;
			}
		}
		for (int i = 1; i <= 9; i++) {
			if (availnums[i] == false) {
				map[u][v] = i;
				fill(filledzero + 1);
				map[u][v] = 0;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			n = cin.get();
			map[i][j] = n - 48;
			if (map[i][j] == 0) {
				blank[zeros][0] = i;
				blank[zeros][1] = j;
				zeros++;
			}
		}
		n = cin.get();
	}
	fill(0);
}