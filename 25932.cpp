#include <iostream>
using namespace std;

int num[10];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	bool m;
	bool z;
	cin >> tc;
	while (tc--) {
		m = false;
		z = false;
		for (int i = 0; i < 10; i++) {
			cin >> num[i];
			if (num[i] == 18) {
				m = true;
			}
			if (num[i] == 17) {
				z = true;
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << num[i] << " ";
		}
		if (m && z) {
			cout << "\nboth\n\n";
		}
		else if (m) {
			cout << "\nmack\n\n";
		}
		else if (z) {
			cout << "\nzack\n\n";
		}
		else {
			cout << "\nnone\n\n";
		}
	}
}