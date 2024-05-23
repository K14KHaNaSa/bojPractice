#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, i;
	cin >> n >> k;
	vector<int> a(n + 1);
	a[n] = 0;
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	priority_queue<int> gap;
	for (i = 0; i < n; i++)
		gap.push(a[i + 1] - a[i]);
	while (k--)
		gap.pop();
	long long int ans = 0;
	while (!gap.empty()) {
		ans += gap.top();
		gap.pop();
	}
	cout << ans;
}