#include <iostream>
using namespace std;

int n, m;
int an[500001];
int am[500001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, a, b, c;
	cin >> n >> m >> q;
	for (int i = 1; i <= n; i++) {
		an[i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		am[i] = 0;
	}
	while (q--) {
		cin >> a >> b >> c;
		if (a == 1) {
			an[b] += c;
		}
		else if (a == 2) {
			am[b] += c;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << an[i] + am[j] << " ";
		}
		cout << "\n";
	}
}