#include <iostream>
using namespace std;

long long int year[11];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int h, y;
	cin >> h >> y;
	year[0] = h;
	for (int i = 1; i < y; i++) {
		year[i] = 0;
	}
	for (int i = 0; i < y; i++) {
		if (i + 5 <= y) {
			year[i + 5] = max(year[i + 5], (year[i] * 135) / 100);
		}
		if (i + 3 <= y) {
			year[i + 3] = max(year[i + 3], (year[i] * 12) / 10);
		}
		if (i < y) {
			year[i + 1] = max(year[i + 1], (year[i] * 105) / 100);
		}
	}
	cout << year[y];
}