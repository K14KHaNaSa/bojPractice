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
	vector<string> origin(n);
	vector<string> inc(n);
	vector<string> dec(n);
	for (int i = 0; i < n; i++) {
		cin >> origin[i];
		inc[i] = origin[i];
		dec[i] = origin[i];
	}
	sort(inc.begin(), inc.end());
	sort(dec.rbegin(), dec.rend());
	bool ok = true;
	for (int i = 0; i < n; i++) {
		if (origin[i] != inc[i]) {
			ok = false;
			break;
		}
	}
	if (ok) {
		cout << "INCREASING";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if (origin[i] != dec[i]) {
			cout << "NEITHER";
			return 0;
		}
	}
	cout << "DECREASING";
}