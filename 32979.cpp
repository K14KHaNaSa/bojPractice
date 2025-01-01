#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a[80];
	int n, t, b;
	cin >> n >> t;
	for (int i = 0; i < n * 2; i++)
		cin >> a[i];
	int f = 0;
	while (t--) {
		cin >> b;
		f = (f + b - 1) % (n * 2);
		cout << a[f] << ' ';
	}
}