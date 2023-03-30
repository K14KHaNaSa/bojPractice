#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char dp;
	int d = 0;
	int p = 0;
	cin >> n;
	bool finished = false;
	while (n--) {
		cin >> dp;
		if (dp == 'D' && !finished) {
			d++;
		}
		else if (dp == 'P' && !finished) {
			p++;
		}
		if (max(d - p, p - d) > 1) {
			finished = true;
		}
	}
	cout << d << ":" << p;
}