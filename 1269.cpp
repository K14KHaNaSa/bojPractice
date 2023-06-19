#include <iostream>
using namespace std;

bool ab[100000001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, n;
	cin >> a >> b;
	int ans = a + b;
	while (a--) {
		cin >> n;
		ab[n] = true;
	}
	while (b--) {
		cin >> n;
		if (ab[n]) {
			ab[n] = false;
			ans -= 2;
		}
	}
	cout << ans;
}