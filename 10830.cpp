#include <iostream>
using namespace std;

int n;
struct mtrx {
	int arr[5][5];
};
struct mtrx a;
struct mtrx func(unsigned long long int p) {
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
				int returnnum = 0;
				for (int k = 0; k < n; k++) {
					returnnum += tempmtrx.arr[i][k] * tempmtrx.arr[k][j];
				}
				returnmtrx.arr[i][j] = returnnum % 1000;
			}
		}
		if (p % 2 == 0) {
			return returnmtrx;
		}
		else {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					int returnnum = 0;
					for (int k = 0; k < n; k++) {
						returnnum += returnmtrx.arr[i][k] * a.arr[k][j];
					}
					rreturnmtrxx.arr[i][j] = returnnum % 1000;
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

	unsigned long long int b;
	cin >> n >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a.arr[i][j];
		}
	}
	a = func(b);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a.arr[i][j] % 1000 << " ";
		}
		cout << "\n";
	}
}