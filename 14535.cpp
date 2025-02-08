#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, d, m, y, c;
	int ans[12];
	string mn[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
					"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	cin >> n;
	c = 1;
	while (n > 0) {
		for (int i = 0; i < 12; i++)
			ans[i] = 0;
		while (n--) {
			cin >> d >> m >> y;
			ans[m - 1]++;
		}
		cout << "Case #" << c << ":\n";
		for (int i = 0; i < 12; i++) {
			cout << mn[i] << ':';
			while (ans[i]--)
				cout << '*';
			cout << '\n';
		}
		cin >> n;
		c++;
	}
}