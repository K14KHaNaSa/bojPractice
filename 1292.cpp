#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int counter = 1;
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			if (counter >= a)
				ans += i;
			if (counter == b) {
				cout << ans;
				return 0;
			}
			counter++;
		}
	}
}