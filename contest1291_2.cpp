#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t[100][2];
	int ans[100];
	int n, p, q;
	bool ok = true;
	cin >> n >> p >> q;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < n; j++)
			cin >> t[j][i];
	}
	for (int i = 0; i < n; i++)
		ans[i] = 0;
	if (p > q) {
		for (int i = 0; i < n; i++) {
			while (t[i][0] < t[i][1]) {
				t[i][0] += p;
				t[i][1] += q;
				ans[i]++;
			}
			if (t[i][0] > t[i][1]) {
				ok = false;
				break;
			}
		}
	}
	else if (p < q) {
		for (int i = 0; i < n; i++) {
			while (t[i][0] > t[i][1]) {
				t[i][0] += p;
				t[i][1] += q;
				ans[i]++;
			}
			if (t[i][0] < t[i][1]) {
				ok = false;
				break;
			}
		}
	}
	else { // p == q
		for (int i = 0; i < n; i++) {
			if (t[i][0] != t[i][1])
				ok = false;
			break;
		}
	}
	if (!ok)
		cout << "NO";
	else {
		cout << "YES\n";
		for (int i = 0; i < n; i++)
			cout << ans[i] << " ";
	}
}