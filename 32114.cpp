#include <iostream>
using namespace std;

long long int n, m, u, v, xj, ans, car;
long long int w[500000];
long long int x[500000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n - 1; i++) {
		cin >> w[i];
		x[i] = 0;
	}
	while (m--) {
		cin >> u >> v >> xj;
		x[u - 1] += xj;
		x[v - 1] -= xj;
	}
	car = 0;
	for (int i = 0; i < n - 1; i++) {
		ans = 0;
		car += x[i];
		if (w[i] > 1) {
			// +1 sq
			ans += (car / w[i] + 1) * (car / w[i] + 1) * (car % w[i]);
			// 0 sq
			ans += (car / w[i]) * (car / w[i]) * (w[i] - car % w[i]);
		}
		else
			ans = car * car;
		cout << ans << '\n';
	}
}