#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h;
	cin >> h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < min(i, h - 1 - i) * 2 + 1; j++) {
			cout << "*";
		}
		for (int j = 0; j < max(i - h / 2, h / 2 - i) * 2; j++) {
			cout << "  ";
		}
		for (int j = 0; j < min(i, h - 1 - i) * 2 + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}