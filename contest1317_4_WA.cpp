#include <iostream>
#include <queue>
using namespace std;

long long int n, m, u, v, x, ans, now;
long long int w[500000];
priority_queue<pair<int, int>> ux;
priority_queue<pair<int, int>> vx;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n - 1; i++)
		cin >> w[i];
	for (int i = 0; i < m; i++) {
		cin >> u >> v >> x;
		for (int j = u - 1; j < v - 1; j++) {
			ux.push(make_pair(u * -1, x));
			vx.push(make_pair(v * -1, x));
		}
	}
	now = 0;
	for (int i = 1; i < n; i++) {
		if (ux.size() > 0) {
			while (ux.top().first * -1 == i) {
				x = ux.top().second;
				now += x;
				ux.pop();
				if (ux.empty())
					break;
			}
		}
		if (vx.size() > 0) {
			while (vx.top().first * -1 == i) {
				now -= vx.top().second;
				vx.pop();
				if (vx.empty())
					break;
			}
		}
		ans = 0;
		//cout << "from " << i << " to " << i + 1 << ", now cars : " << (now / 2) << ' ';
		if (w[i - 1] > 1) {
			// +1 sq
			ans += ((now / 2) / w[i - 1] + 1) * ((now / 2) / w[i - 1] + 1) * ((now / 2) % w[i - 1]);
			// cout << ans << ' ';
			// 0 sq
			ans += ((now / 2) / w[i - 1]) * ((now / 2) / w[i - 1]) * (w[i - 1] - (now / 2) % w[i - 1]);
			cout << ans << '\n';
		}
		else {
			ans = (now / 2) * (now / 2);
			cout << ans << '\n';
		}
	}
}