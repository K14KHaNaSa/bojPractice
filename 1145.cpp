#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n[5];
	int ans = 101;
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		ans = min(ans, n[i]);
	}
	while (true) {
		int divs = 0;
		for (int i = 0; i < 5; i++) {
			if (ans % n[i] == 0)
				divs++;
		}
		if (divs > 2)
			break;
		ans++;
	}
	cout << ans;
}