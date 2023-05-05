#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a < b && b < c && c < d) {
		cout << "Fish Rising";
	}
	else if (a > b && b > c && c > d) {
		cout << "Fish Diving";
	}
	else if (a == b && b == c && c == d && a == d) {
		cout << "Fish At Constant Depth";
	}
	else {
		cout << "No Fish";
	}
}