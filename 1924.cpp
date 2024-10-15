#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;
	y--;
	if (x > 1)
		y += 31;
	if (x > 2)
		y += 28;
	if (x > 3)
		y += 31;
	if (x > 4)
		y += 30;
	if (x > 5)
		y += 31;
	if (x > 6)
		y += 30;
	if (x > 7)
		y += 31;
	if (x > 8)
		y += 31;
	if (x > 9)
		y += 30;
	if (x > 10)
		y += 31;
	if (x > 11)
		y += 30;
	switch (y % 7) {
	case 0: cout << "MON"; break;
	case 1: cout << "TUE"; break;
	case 2: cout << "WED"; break;
	case 3: cout << "THU"; break;
	case 4: cout << "FRI"; break;
	case 5: cout << "SAT"; break;
	default: cout << "SUN";
	}
}