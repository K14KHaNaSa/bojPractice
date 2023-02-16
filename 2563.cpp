#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool white[100][100] = { false };
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				white[j][k] = true;
			}
		}
	}
	int black = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (white[i][j]) {
				black++;
			}
		}
	}
	cout << black;
}