#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, x, y;
	bool area[10001] = { false };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < y; j++) {
			area[j] = true;
		}
	}
	int line = 0;
	for (int i = 0; i < 10000; i++) {
		if (area[i] == true) {
			line++;
		}
	}
	cout << line;
}