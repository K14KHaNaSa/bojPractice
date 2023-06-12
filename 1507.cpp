#include <iostream>
using namespace std;

int n;
int map[20][20];
int bestmap[20][20];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			bestmap[i][j] = map[i][j];
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] > 0 &&
					map[i][k] > 0 &&
					map[k][j] > 0) {
					if (map[i][j] == map[i][k] + map[k][j]) {
						map[i][j] = 0;
						bestmap[i][j] = 0;
					}
					else if (map[i][j] > map[i][k] + map[k][j]) {
						bestmap[i][j] = 0;
					}
				}
			}
		}
	}
	bool ok = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] != bestmap[i][j]) {
				ok = false;
				break;
			}
		}
	}
	if (ok) {
		int answer = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				answer += map[i][j];
			}
		}
		cout << answer;
	}
	else {
		cout << "-1";
	}
}