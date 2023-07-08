#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char a;
	int ans = 0;
	a = cin.get();
	for (int i = 0; i < 10; i++) {
		bool chk = true;
		for (int j = 0; j < n / 10; j++) {
			a = cin.get();
			if (a == 'N') {
				chk = false;
			}
		}
		if (chk) {
			ans++;
		}
	}
	cout << ans;
}