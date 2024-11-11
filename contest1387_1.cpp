#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int sx, sy, ex, ey, px, py;
	cin >> sx >> sy >> ex >> ey >> px >> py;
	if (sx == ex) {
		if (sx != px)
			cout << 0;
		else {
			if (sy < py && py < ey)
				cout << 2;
			else if (sy > py && py > ey)
				cout << 2;
			else
				cout << 0;
		}
	}
	else if (sy == ey) {
		if (sy != py)
			cout << 0;
		else {
			if (sx < px && px < ex)
				cout << 2;
			else if (sx > px && px > ex)
				cout << 2;
			else
				cout << 0;
		}
	}
	else
		cout << 1;
}