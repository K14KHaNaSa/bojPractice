#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, t, c, p;
	cin >> n >> t >> c >> p;
	cout << (((n - 1) / t) * c) * p;
}