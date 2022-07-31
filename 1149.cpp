#include <iostream>
#include <vector>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector <int> r(1001);
	vector <int> g(1001);
	vector <int> b(1001);
	int n, rc, gc, bc;
	cin >> n;
	cin >> r[1] >> g[1] >> b[1];
	for (int i = 2; i <= n; i++) {
		cin >> rc >> gc >> bc;
		r[i] = min(rc + g[i - 1], rc + b[i - 1]);
		g[i] = min(gc + r[i - 1], gc + b[i - 1]);
		b[i] = min(bc + r[i - 1], bc + g[i - 1]);
	}
	if (r[n]<g[n] && r[n]<b[n]) {
		cout << r[n];
	}
	else if (g[n] < b[n]) {
		cout << g[n];
	}
	else {
		cout << b[n];
	}
}