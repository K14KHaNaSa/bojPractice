#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	if (sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) < (r1 + r2)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}