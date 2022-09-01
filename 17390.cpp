#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, q, npt, qs, qe;
	cin >> n >> q;
	vector<int> suyul(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> suyul[i];
	}
	sort(suyul.begin(), suyul.end());
	for (int i = 1; i <= n; i++) {
		suyul[i] = suyul[i - 1] + suyul[i];
	}

	for (int i = 0; i < q; i++) {
		cin >> qs >> qe;
		cout << suyul[qe] - suyul[qs - 1] << "\n";
	}
}