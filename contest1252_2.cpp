#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	int asum = 0;
	int bsum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		asum += a;
	}
	for (int i = 0; i < n; i++) {
		cin >> b;
		bsum += b;
	}
	cout << bsum << " " << asum;
}