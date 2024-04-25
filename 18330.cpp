#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	cout << min(n, (k + 60)) * 1500 + max(n - (k + 60), 0) * 3000;
}