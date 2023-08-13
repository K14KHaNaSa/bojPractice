#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int amem[100001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a;
	cin >> n >> m;
	vector<int> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	sort(h.begin(), h.end());
	amem[0] = 0;
	for (int i = 1; i < h[0]; i++) {
		amem[i] = amem[i - 1];
	}
	amem[h[0]] = 1;
	for (int i = 1; i < h.size(); i++) {
		for (int j = h[i - 1] + 1; j <= h[i]; j++) {
			amem[j] = amem[j - 1];
		}
		amem[h[i]]++;
	}
	for (int i = h[n - 1] + 1; i <= 100000; i++) {
		amem[i] = amem[i - 1];
	}
	unsigned long long int hi = 0;
	unsigned long long int arc = 0;
	unsigned long long int draw = 0;
	for (int i = 0; i < m; i++) {
		cin >> a;
		hi += max(n - amem[a], 0);
		arc += amem[a - 1];
		draw += amem[a] - amem[a - 1];
	}
	cout << hi << " " << arc << " " << draw;
}