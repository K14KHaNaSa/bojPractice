#include <iostream>
using namespace std;

int a[100000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, ai;
	int goaro = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ai;
		a[ai - 1]++;
		goaro = max(goaro, a[ai - 1]);
	}
	if (n % 2 == 1)
		(n + 1) / 2 < goaro ? cout << "NO" : cout << "YES";
	else
		n / 2 < goaro ? cout << "NO" : cout << "YES";
}