#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int divtri[101];
	divtri[0] = 1;
	divtri[1] = 2;
	int plus = 2;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		divtri[i] = divtri[i - 1] + plus;
		if (i % 3 != 0) {
			plus++;
		}
	}
	cout << divtri[n];
}