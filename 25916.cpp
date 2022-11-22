#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, m, a, f;
	queue<int> sirh;
	int ham = 0;
	int maxm = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ham += a;
		sirh.push(a);
		if (ham <= m) {
			if (maxm < ham) {
				maxm = ham;
			}
		}
		else {
			while (ham > m && !sirh.empty()) {
				f = sirh.front();
				ham -= f;
				sirh.pop();
				if (sirh.empty()) {
					break;
				}
			}
			if (maxm < ham && ham <= m) {
				maxm = ham;
			}
		}
	}
	cout << maxm;
}