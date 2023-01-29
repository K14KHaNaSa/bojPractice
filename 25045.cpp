#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a.rbegin(), a.rend());
	sort(b.begin(), b.end());
	long long int answer = 0;
	for (int i = 0; i < min(n, m); i++) {
		if (a[i] - b[i] > 0) {
			answer += a[i] - b[i];
		}
		else {
			break;
		}
	}
	cout << answer;
}