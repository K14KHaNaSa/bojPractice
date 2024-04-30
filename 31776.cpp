#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t1, t2, t3;
	int ans = 0;
	cin >> n;
	while (n--) {
		cin >> t1 >> t2 >> t3;
		if (t1 > -1) {
			if (t2 >= t1 || t2 == -1) {
				if ((t3 >= t2 && t2 != -1) || t3 == -1)
					ans++;
			}
		}
	}
	cout << ans;
}