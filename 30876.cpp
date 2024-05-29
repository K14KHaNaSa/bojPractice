#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int ansx, x, y;
	int ansy = 1001;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		if (y < ansy) {
			ansx = x;
			ansy = y;
		}
	}
	cout << ansx << " " << ansy;
}