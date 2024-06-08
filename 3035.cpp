#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char n[50][50];
	char s;
	int r, c, zr, zc;
	cin >> r >> c >> zr >> zc;
	for (int i = 0; i < r; i++) {
		s = cin.get();
		for (int j = 0; j < c; j++) {
			s = cin.get();
			n[i][j] = s;
		}
	}
	for (int i = 0; i < r * zr; i++) {
		for (int j = 0; j < c * zc; j++)
			cout << n[i / zr][j / zc];
		cout << '\n';
	}
}