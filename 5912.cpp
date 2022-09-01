#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, hs, he;
	cin >> n >> k;
	vector<int> hay(n+1);
	vector<int> haym(n+1);
	for (int i = 1; i <= k; i++) {
		cin >> hs >> he;
		hay[he]++;
		haym[hs-1]++;
	}
	for (int i = n; i > 0; i--) {
		hay[i - 1] = hay[i - 1] + hay[i];
		haym[i - 1] = haym[i - 1] + haym[i];
	}
	for (int i = 0; i < n; i++) {
		hay[i] = hay[i] - haym[i];
	}
	sort(hay.begin(), hay.end());
	cout << hay[n / 2 + 1];
}