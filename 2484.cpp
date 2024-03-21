#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, d;
	int dn[6];
	int ans = 0;
	cin >> n;
	while (n--) {
		for (int i = 0; i < 6; i++)
			dn[i] = 0;
		for (int i = 0; i < 4; i++) {
			cin >> d;
			dn[d - 1]++;
		}
		bool result = false;
		// rule 1
		for (int i = 0; i < 6; i++) {
			if (dn[i] == 4) {
				result = true;
				ans = max(ans, 55000 + i * 5000);
			}
		}
		// rule 2
		if (!false) {
			for (int i = 0; i < 6; i++) {
				if (dn[i] == 3) {
					result = true;
					ans = max(ans, 11000 + i * 1000);
				}
			}
		}
		// rule 3, 4
		if (!false) {
			int db = 0;
			for (int i = 0; i < 6; i++) {
				if (dn[i] == 2) {
					db++;
				}
			}
			if (db == 2) {
				int price = 2000;
				for (int i = 0; i < 6; i++) {
					if (dn[i] == 2)
						price += (i + 1) * 500;
				}
				ans = max(ans, price);
			}
			else if (db == 1) {
				for (int i = 0; i < 6; i++) {
					if (dn[i] == 2)
						ans = max(ans, 1100 + i * 100);
				}
			}
			else {
				for (int i = 0; i < 6; i++) {
					if (dn[i] > 0)
						ans = max(ans, (i + 1) * 100);
				}
			}
		}
	}
	cout << ans;
}