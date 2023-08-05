#include <iostream>
using namespace std;

int n, m;
int wt[201];
int sc[201];
int wtw[201];
int scw[201];
bool v[201];

bool mk(int wtn) {
	if (v[wtn] || wtn == 0) {
		return false;
	}
	v[wtn] = true;
	int w = wtw[wtn];
	for (int i = 1; i <= m; i++) {
		int c = scw[i];
		if ((((c * 2 >= w) && (c * 4 <= w * 3)) ||
			((c >= w) && (c * 4 <= w * 5))) &&
			(sc[i] == 0 || mk(sc[i]))) {
			wt[wtn] = i;
			sc[i] = wtn;
			return true;
		}
	}
	return false;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> wtw[i];
		wt[i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		cin >> scw[i];
		sc[i] = 0;
	}
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			v[j] = false;
		}
		if (mk(i)) {
			answer++;
		}
	}
	cout << answer;
}