#include <iostream>
using namespace std;

int n, mx, mn;
int a[12][2]; // [Ai, optr]
int optr[4]; // + - * /

void bt(int num) {
	if (num == n) {
		int result = a[0][0];
		for (int i = 1; i < n; i++) {
			int opt = a[i][1];
			if (opt == 0) {
				result += a[i][0];
			}
			else if (opt == 1) {
				result -= a[i][0];
			}
			else if (opt == 2) {
				result *= a[i][0];
			}
			else if (opt == 3) {
				result /= a[i][0];
			}
		}
		mx = max(mx, result);
		mn = min(mn, result);
	}
	else {
		for (int j = 0; j < 4; j++) {
			if (optr[j] > 0) {
				a[num][1] = j;
				optr[j] -= 1;
				bt(num + 1);
				optr[j] += 1;
			}
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i][0];
	}
	a[0][1] = 0;
	for (int i = 0; i < 4; i++) {
		cin >> optr[i];
	}
	mx = -1000000001;
	mn = 1000000001;
	bt(1);
	cout << mx << "\n" << mn;
}