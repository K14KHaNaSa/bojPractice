#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int f = 0;
	int ans = 0;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (a[i] != f) {
			f = a[i];
			ans++;
		}
	}
	cout << ans;
}