#include <iostream>
using namespace std;

int score[10001] = { 0, };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t, k, s;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		cin >> k >> s;
		for (int j = t; j >= k; j--) {
			score[j] = max(score[j], score[j - k] + s);
		}
	}
	cout << score[t];
}