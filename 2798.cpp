#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, m, sum;
	cin >> n >> m;
	vector<int> card(n);
	sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if ((card[i] + card[j] + card[k]) > sum) {
					if ((card[i] + card[j] + card[k]) <= m) {
						sum = card[i] + card[j] + card[k];
					}
				}
			}
		}
	}
	cout << sum;
}