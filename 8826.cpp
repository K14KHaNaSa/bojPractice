#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int z, n, x, y;
	char d;
	cin >> z;
	while (z--) {
		cin >> n;
		x = 0;
		y = 0;
		d = cin.get(); // \n
		while (n--) {
			d = cin.get();
			if (d == 'E')
				x++;
			if (d == 'W')
				x--;
			if (d == 'S')
				y--;
			if (d == 'N')
				y++;
		}
		cout << max(0 - x, x - 0) + max(0 - y, y - 0) << '\n';
	}
}