#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc, h;
	char cb;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		cin >> h;
		cb = cin.get();
		while (cb == '\n') {
			cb = cin.get();
		}
		int remain = h;
		while (cb != '\n') {
			if (cb == 'c') {
				remain++;
			}
			else if (cb == 'b') {
				remain--;
			}
			cb = cin.get();
		}
		cout << "Data Set " << i << ":\n" << remain << "\n\n";
	}
}