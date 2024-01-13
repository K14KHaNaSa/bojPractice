#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, b;
	int a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int all = 0;
	int notmy = 0;
	for (int i = 0; i < n; i++) {
		cin >> b;
		all += a[i];
		if (b == 0)
			notmy += a[i];
	}
	cout << all << "\n" << notmy;
}