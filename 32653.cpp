#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int pnum[9] = { 2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 };
	long long int m[9];
	long long int n, x, ans, pw;
	cin >> n;
	for (int i = 0; i < 9; i++)
		m[i] = 0;
	while (n--) {
		cin >> x;
		long long int origin = x;
		for (int i = 0; i < 9; i++) {
			if (x % pnum[i] == 0) {
				pw = 0;
				while (x % pnum[i] == 0) {
					pw++;
					x /= pnum[i];
				}
				m[i] = max(m[i], pw);
			}
		}
	}
	ans = 2;
	for (int i = 0; i < 9; i++) {
		while (m[i]--)
			ans *= pnum[i];
	}
	cout << ans;
}