#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, zo, dx, dy, ax, ay, bx, by;
	bool dpart = false;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> zo;
			if (zo == 1) {
				if (!dpart) {
					dx = i;
					dy = j;
					dpart = true;
				}
				else {
					ax = i;
					ay = j;
				}
			}
		}
	}
	if (dx >= ax) {
		bx = dx - ax;
	}
	else {
		bx = ax - dx;
	}
	if (dy >= ay) {
		by = dy - ay;
	}
	else {
		by = ay - dy;
	}
	cout << bx + by;
}