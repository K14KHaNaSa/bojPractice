#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, x, y, i;
	int d[500][2];
	char o;
	bool stop;
	cin >> n >> k;
	for (i = 0; i < n; i++)
		cin >> d[i][0] >> d[i][1];
	o = cin.get(); // \n
	x = 0;
	y = 0;
	while (k--) {
		stop = false;
		o = cin.get();
		if (o == 'U')
			y++;
		if (o == 'D')
			y--;
		if (o == 'L')
			x--;
		if (o == 'R')
			x++;
		for (i = 0; i < n; i++) {
			if (d[i][0] == x && d[i][1] == y)
				stop = true;
		}
		if (stop) {
			if (o == 'U')
				y--;
			if (o == 'D')
				y++;
			if (o == 'L')
				x++;
			if (o == 'R')
				x--;
		}
	}
	cout << x << ' ' << y;
}