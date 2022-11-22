#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, x, y;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x >> y;
	int ya = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= y) {
			ya++;
		}
	}
	cout << n * x / 100 << " " << ya;
}