#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s;
	int ans = 0;
	bool active = true;
	cin >> n;
	s = cin.get(); // \n dummy
	s = cin.get();
	bool flipper;
	if (s == 'O')
		flipper = true;
	if (s == 'X')
		flipper = false;
	n--;
	while (n--) {
		s = cin.get();
		if (active) {
			if (flipper && s == 'X')
				active = false;
			if (!flipper && s == 'O')
				active = false;
			if (!active)
				ans++;
		}
		else
			active = true;
		if (s == 'O')
			flipper = true;
		if (s == 'X')
			flipper = false;
	}
	cout << ans;
}