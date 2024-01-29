#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	char c;
	char s[2000];
	int x = 0;
	int y = 0;
	bool home = false;
	cin >> n >> k;
	c = cin.get(); // \n
	for (int i = 0; i < n; i++) {
		c = cin.get();
		s[i] = c;
	}
	k = min(k, 2000);
	while (k-- && !home) {
		for (int i = 0; i < n; i++) {
			if (s[i] == 'U')
				x++;
			if (s[i] == 'D')
				x--;
			if (s[i] == 'L')
				y--;
			if (s[i] == 'R')
				y++;
			if (x == 0 && y == 0) {
				home = true;
				break;
			}
		}
	}
	home ? cout << "YES" : cout << "NO";
}