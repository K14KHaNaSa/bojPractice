#include <iostream>
using namespace std;

bool powersum[80][16001] = { false, };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, x, a, b;
	cin >> n >> k >> x;
	int powermax = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		powermax += a;
		for (int j = i; j > 0; j--) {
			if (j < k) {
				for (int l = powermax - a; l >= 0; l--) {
					if (powersum[j - 1][l]) {
						powersum[j][l + a] = true;
					}
				}
			}
		}
		powersum[0][a] = true;
	}
	int maxteamstatus = 0;
	for (int i = 0; i <= k * x; i++) {
		if (powersum[k - 1][i]) {
			maxteamstatus = max(maxteamstatus, (k * x - i) * i);
		}
	}
	cout << maxteamstatus;
}