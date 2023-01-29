#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, m, sx, ex, sy, ey;
	cin >> n >> m >> sx >> sy >> ex >> ey;
	if ((n == 1 || m == 1) && !(sx == ex && sy == ey)) {
		cout << "NO";
	}
	else if ((sx % 2 + sy % 2) % 2 == (ex % 2 + ey % 2) % 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}