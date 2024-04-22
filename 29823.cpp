#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char d;
	int v = 0;
	int h = 0;
	int n;
	cin >> n;
	d = cin.get();
	while (n--) {
		d = cin.get();
		if (d == 'E')
			h++;
		if (d == 'W')
			h--;
		if (d == 'S')
			v--;
		if (d == 'N')
			v++;
	}
	cout << max(0 - v, v - 0) + max(0 - h, h - 0);
}