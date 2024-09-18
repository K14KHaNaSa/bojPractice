#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int b, n, y, l;
	int c = 0;
	cin >> b >> n >> y >> l;
	for (int i = 0; i <= l / b; i++) {
		for (int j = 0; j <= l / n; j++) {
			for (int k = 0; k <= l / y; k++) {
				if (i * b + j * n + k * y <= l) {
					if (i + j + k == 0) continue;
					cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel\n";
					c++;
				}
			}
		}
	}
	cout << "Number of ways to catch fish: " << c;
}