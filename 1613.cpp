#include <iostream>
using namespace std;

int n;
bool act[400][400]; // before -> after

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, a, b, s;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			act[i][j] = false;
		}
	}
	while (k--) {
		cin >> a >> b;
		act[b - 1][a - 1] = true;
	}
	for (k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (act[i][k] && act[k][j]) {
					act[i][j] = true;
				}
			}
		}
	}
	cin >> s;
	while (s--) {
		cin >> a >> b;
		if (act[a - 1][b - 1]) {
			cout << "1\n";
		}
		else if (act[b - 1][a - 1]) {
			cout << "-1\n";
		}
		else {
			cout << "0\n";
		}
	}
}