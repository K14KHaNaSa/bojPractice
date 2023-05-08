#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> coin(100001, 100001);
	int n;
	cin >> n;
	coin[0] = 0;
	for (int i = 0; i < n; i++) {
		if (i + 7 <= n) {
			coin[i + 7] = min(coin[i + 7], coin[i] + 1);
		}
		if (i + 5 <= n) {
			coin[i + 5] = min(coin[i + 5], coin[i] + 1);
		}
		if (i + 2 <= n) {
			coin[i + 2] = min(coin[i + 2], coin[i] + 1);
		}
		if (i + 1 <= n) {
			coin[i + 1] = min(coin[i + 1], coin[i] + 1);
		}
	}
	cout << coin[n];
}