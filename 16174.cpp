#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int map[64][64];
	bool step[64][64];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			step[i][j] = false;
		}
	}
	step[0][0] = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (step[i][j]) {
				if (map[i][j] + i < n)
					step[i + map[i][j]][j] = true;
				if (map[i][j] + j < n)
					step[i][j + map[i][j]] = true;
			}
		}
	}
	(step[n - 1][n - 1]) ? cout << "HaruHaru" : cout << "Hing";
}