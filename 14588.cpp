#include <iostream>
using namespace std;

int n;
int lr[300][2];
int near[300][300];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> lr[i][0] >> lr[i][1];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (lr[j][0] <= lr[i][0] && lr[i][1] <= lr[j][1]) {
				near[i][j] = 1;
			}
			else if (lr[j][0] <= lr[i][0] && lr[i][0] <= lr[j][1]) {
				near[i][j] = 1;
			}
			else if (lr[i][0] <= lr[j][0] && lr[j][1] <= lr[i][1]) {
				near[i][j] = 1;
			}
			else if (lr[j][0] <= lr[i][1] && lr[i][1] <= lr[j][1]) {
				near[i][j] = 1;
			}
			else {
				near[i][j] = 999;
			}
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				near[i][j] = min(near[i][j], near[i][k] + near[k][j]);
			}
		}
	}
	int q, a, b;
	cin >> q;
	while (q--) {
		cin >> a >> b;
		if (near[a - 1][b - 1] > 900) {
			cout << "-1\n";
		}
		else {
			cout << near[a - 1][b - 1] << "\n";
		}
	}
}