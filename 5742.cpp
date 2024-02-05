#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, c, k, x;
	int app[100];
	cin >> n >> c >> k;
	while (n != 0 && c != 0 && k != 0) {
		for (int i = 1; i <= k; i++)
			app[i] = 0;
		while (n--) {
			for (int i = 0; i < c; i++) {
				cin >> x;
				app[x]++;
			}
		}
		int minval = 1000000001;
		for (int i = k; i > 0; i--)
			minval = min(minval, app[i]);
		for (int i = 1; i <= k; i++) {
			if (minval == app[i])
				cout << i << " ";
		}
		cout << "\n";
		cin >> n >> c >> k;
	}
}