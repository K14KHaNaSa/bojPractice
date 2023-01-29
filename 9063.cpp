#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, y, minx, miny, maxx, maxy;
	cin >> n;
	cin >> minx >> miny;
	maxx = minx;
	maxy = miny;
	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		minx = min(minx, x);
		miny = min(miny, y);
		maxx = max(maxx, x);
		maxy = max(maxy, y);
	}
	cout << (maxx - minx) * (maxy - miny);
}