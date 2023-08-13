#include <iostream>
using namespace std;

int n, k, ans;
int c[10][10];
bool set[10];

void mara(int coms, int start) {
	if (coms == k) {
		int now = 0;
		for (int i = 0; i < n; i++) {
			if (set[i]) {
				for (int j = i + 1; j < n; j++) {
					if (set[j]) {
						now += c[i][j];
					}
				}
			}
		}
		ans = max(ans, now);
	}
	else {
		for (int i = start; i < n; i++) {
			if (!set[i]) {
				set[i] = true;
				mara(coms + 1, i + 1);
				set[i] = false;
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	ans = -1000000001;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		mara(0, i);
	}
	cout << ans;
}