#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, dis;
	cin >> n >> m;
	int shortr;
	int shortc;
	int r = 0;
	int c = 0;
	if (n > 1) {
		cin >> shortr;
		for (int i = 1; i < n - 1; i++) {
			cin >> dis;
			if (dis < shortr) {
				r = i;
				shortr = dis;
			}
		}
		int shortc;
		int c = 0;
		cin >> shortc;
		if (shortc < dis) {
			r = n - 1;
		}
	}
	else {
		cin >> shortc;
	}
	for (int i = 1; i < m; i++) {
		cin >> dis;
		if (dis < shortc) {
			c = i;
			shortc = dis;
		}
	}
	cout << r + 1 << " " << c + 1;
}