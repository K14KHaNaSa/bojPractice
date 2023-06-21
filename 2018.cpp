#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int ans = 0;
	int psum = 0;
	int l = 1;
	for (int i = 1; i <= n; i++) {
		psum += i;
		if (psum > n) {
			while (psum > n) {
				psum -= l;
				l++;
			}
		}
		if (psum == n) {
			ans++;
		}
	}
	cout << ans;
}