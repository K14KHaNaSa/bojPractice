#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, ans;
	char a;
	cin >> t;
	a = cin.get();
	while (t--) {
		a = cin.get();
		ans = 0;
		while (a != '\n') {
			if (a == 'I')
				ans++;
			if (a == 'V')
				ans += 5;
			if (a == 'X')
				ans += 10;
			if (a == 'L')
				ans += 50;
			if (a == 'C')
				ans += 100;
			if (a == 'D')
				ans += 500;
			if (a == 'M')
				ans += 1000;
			a = cin.get();
		}
		cout << ans << "\n";
	}
}