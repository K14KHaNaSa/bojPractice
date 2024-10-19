#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, m;
	cin >> n >> m;
	cout << (n - 1) * m + (m - 1) * n + (n - 1) * (m - 1) * 2;
}