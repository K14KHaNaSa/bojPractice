#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, r, c;
	cin >> n >> r >> c;
	if (((r%2==0)&&(c%2==1)) || ((r%2==1)&&(c%2==0))) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i + j) % 2 == 1) {
					cout << "v";
				}
				else {
					cout << ".";
				}
			}
			cout << "\n";
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i + j) % 2 == 1) {
					cout << ".";
				}
				else {
					cout << "v";
				}
			}
			cout << "\n";
		}
	}
}