#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, k, bc;
	cin >> n >> k;
	bc = 1;
	if (k == 0){
		cout << 1;
	}
	else {
		for (int i = n; i > k; i--) {
			bc *= i;
		}
		for (int i = 1; i <= n - k; i++) {
			bc /= i;
		}
		cout << bc;
	}
}