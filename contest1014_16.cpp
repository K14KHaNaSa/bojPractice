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
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	if (a[n - 1] - a[0] == n - 1) {
		cout << "-1";
	}
	else {
		int answer = 0;
		int maxmin = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] - a[i - 1] > 1) {
				if (maxmin < (a[i] - a[i - 1]) / 2) {
					maxmin = (a[i] - a[i - 1]) / 2;
					answer = a[i - 1] + maxmin;
				}
			}
		}
		cout << answer;
	}
}