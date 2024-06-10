#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;
	int ans = 0;
	int mov = 1;
	int now = x;
	bool d = true; // true -> // false <-
	while (1) {
		if (d) {
			if (x + mov >= y && y > x) {
				ans += y - now;
				break;
			}
			else {
				ans += mov + x - now;
				now = x + mov;
				d = false;
			}
		}
		else {
			if (x - mov <= y && x > y) {
				ans += now - y;
				break;
			}
			else {
				ans += mov + now - x;
				now = x - mov;
				d = true;
			}
		}
		mov *= 2;
	}
	cout << ans;
}