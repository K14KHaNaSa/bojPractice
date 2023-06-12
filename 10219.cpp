#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc, h, w;
	char b;
	char fire[12][12];
	cin >> tc;
	while (tc--) {
		cin >> h >> w;
		for (int i = 0; i < h; i++) {
			b = cin.get();
			for (int j = 0; j < w; j++) {
				b = cin.get();
				fire[i][j] = b;
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = w - 1; j >= 0; j--) {
				cout << fire[i][j];
			}
			cout << "\n";
		}
	}
}