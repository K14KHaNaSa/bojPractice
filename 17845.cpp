#include <iostream>
using namespace std;

int importance[10001] = { 0, };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, l, t;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> l >> t;
		for (int j = n; j >= t; j--) {
			importance[j] = max(importance[j], importance[j - t] + l);
		}
	}
	cout << importance[n];
}