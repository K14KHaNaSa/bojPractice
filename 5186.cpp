#include <iostream>
#include <queue>
using namespace std;

int f[501][2]; // { drunken , not_drunken }

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, n, c, l, ln, s;
	char is;
	cin >> k;
	for (int i = 1; i <= k; i++) {
		cin >> n >> c >> l;
		for (int j = 1; j <= l; j++) {
			f[j][0] = 0;
			f[j][1] = 0;
		}
		while (n--) {
			cin >> ln >> is;
			if (is == 'I')
				f[ln][0]++;
			if (is == 'S')
				f[ln][1]++;
		}
		priority_queue<pair<int, int>> car; // { carseat, dest }
		while (c--) {
			cin >> ln >> s;
			car.push(make_pair(s, ln));
		}
		while (!car.empty()) {
			ln = car.top().second;
			s = car.top().first;
			car.pop();
			if (f[ln][1] > 0) {
				f[ln][1]--;
				s--;
				if (f[ln][0] >= s)
					f[ln][0] -= s;
				else {
					s = s - f[ln][0];
					f[ln][0] = 0;
					f[ln][1] = max(f[ln][1] - s, 0);
				}
			}
		}
		int ans = 0;
		for (int j = 1; j <= l; j++)
			ans += f[j][0] + f[j][1];
		cout << "Data Set " << i << ":\n" << ans << "\n";
	}
}