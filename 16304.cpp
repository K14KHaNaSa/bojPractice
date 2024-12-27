#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, a;
	vector<int> p;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> a;
		p.push_back(a);
	}
	sort(p.begin(), p.end());
	int ans = 1;
	for (int i = 1; i < n; i++) {
		if (p[i - 1] + p[i] > x)
			break;
		else
			ans++;
	}
	cout << ans;
}