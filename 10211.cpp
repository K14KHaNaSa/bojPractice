#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x[1001];
	int tc, n, ipt, answer;
	cin >> tc;
	x[0] = 0;
	for (int i = 0; i < tc; i++) {
		cin >> n;
		answer = -1001;
		for (int j = 1; j <= n; j++) {
			cin >> ipt;
			x[j] = x[j - 1] + ipt;
		}

		for (int j = 1; j <= n; j++) {
			for (int k = 0; k < j; k++) {
				answer = max(answer, x[j] - x[k]);
			}
		}
		cout << answer << "\n";
	}
}