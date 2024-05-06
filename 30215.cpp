#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int o, a, k;
	cin >> o >> a >> k;
	for (int i = 1; i <= o / a; i++) {
		for (int j = 1; j <= (o - a * i); j++) {
			if (o == a * i + k * j) {
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
}