#include <iostream>
using namespace std;

int n, m;
struct mtrx {
	unsigned long long int arr[100][100];
};
struct mtrx a;
struct mtrx func(int p) {
	if (p == 1) {
		struct mtrx returnmtrx = a;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				returnmtrx.arr[i][j] = a.arr[i][j];
			}
		}
		return returnmtrx;
	}
	else {
		struct mtrx tempmtrx = func(p / 2);
		struct mtrx returnmtrx;
		struct mtrx rreturnmtrxx;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				unsigned long long int returnnum = 0;
				for (int k = 0; k < n; k++) {
					returnnum += tempmtrx.arr[i][k] * tempmtrx.arr[k][j];
				}
				returnmtrx.arr[i][j] = returnnum % m;
			}
		}
		if (p % 2 == 0) {
			return returnmtrx;
		}
		else {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					unsigned long long int returnnum = 0;
					for (int k = 0; k < n; k++) {
						returnnum += returnmtrx.arr[i][k] * a.arr[k][j];
					}
					rreturnmtrxx.arr[i][j] = returnnum % m;
				}
			}
			return rreturnmtrxx;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int b;
	cin >> n >> m >> b;
	while (!(n == 0 && m == 0 && b == 0)) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a.arr[i][j];
			}
		}
		a = func(b);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a.arr[i][j] % m << " ";
			}
			cout << "\n";
		}
		cout << "\n";
		cin >> n >> m >> b;
	}
}