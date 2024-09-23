#include <iostream>
using namespace std;

int f[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		f[i] = 0;
	while (m--) {
		cin >> a >> b;
		f[a - 1]++;
		f[b - 1]++;
	}
	for (int i = 0; i < n; i++)
		cout << f[i] << '\n';
}