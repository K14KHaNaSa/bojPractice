#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int bx, by, dx, dy, jx, jy;
	cin >> bx >> by >> dx >> dy >> jx >> jy;
	int b = max(max(jx - bx, bx - jx), max(jy - by, by - jy));
	int d = max(jx - dx, dx - jx) + max(jy - dy, dy - jy);
	if (b == d) {
		cout << "tie";
	}
	else if (b < d) {
		cout << "bessie";
	}
	else if (b > d) {
		cout << "daisy";
	}
}