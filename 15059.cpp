#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a[3];
	int r[3];
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	for (int i = 0; i < 3; i++)
		cin >> r[i];	
	int ans = max(0, r[0] - a[0]) + max(0, r[1] - a[1]) + max(0, r[2] - a[2]);
	cout << ans;
}