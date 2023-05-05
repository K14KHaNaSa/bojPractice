#include <iostream>
using namespace std;

int coin[100];
int cnt[10001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, cn;
	int okcoin = 0; // count only coin <= k
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cnt[i] = 100001;
	}
	for (int i = 0; i < n; i++) {
		cin >> cn;
		if (cn <= k) {
			coin[okcoin] = cn;
			cnt[cn] = 1;
			okcoin++;
		}
	}
	for (int i = 1; i < k; i++) {
		if (cnt[i] < 100001) {
			for (int j = 0; j < okcoin; j++) {
				int nxt = coin[j];
				if (i + nxt <= k) {
					cnt[i + nxt] = min(cnt[i + nxt], cnt[i] + 1);
				}
			}
		}
	}
	if (cnt[k] > 100000) {
		cout << "-1";
	}
	else {
		cout << cnt[k];
	}
}