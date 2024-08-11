#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	char r;
	int infested[10000];
	bool origin[10000];
	cin >> n >> m >> k;
	r = cin.get(); // \n
	for (int i = 0; i < n; i++) {
		r = cin.get();
		r == 'R' ? origin[i] = true : origin[i] = false;
		infested[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (origin[i]) {
			infested[max(0, i - k)]++;
			infested[min(n - 1, i + k + 1)]--;
		}
	}
	int ans = 0;
	int val = 0;
	for (int i = 0; i < n; i++) {
		val += infested[i];
		if (val > 0)
			ans++;
	}
	ans > m ? cout << "No" : cout << "Yes";
}