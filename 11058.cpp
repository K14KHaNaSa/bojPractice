#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int a[101] = { 0, };
	int n;
	cin >> n;
	for (unsigned long long int i = 1; i <= n; i++) {
		a[i] = max(a[i],i);
		for (unsigned long long int j = i + 2; j <= n; j++) {
			a[j] = max(a[j], a[i] * (j - i - 1));
		}
	}
	cout << a[n];
}