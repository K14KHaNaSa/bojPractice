#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int pxl[10][10];
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> pxl[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int m = 0; m < k; m++) {
			for (int j = 0; j < n; j++) {
				for (int l = 0; l < k; l++) {
					cout << pxl[i][j] << " ";
				}
			}
			cout << "\n";
		}
	}
}