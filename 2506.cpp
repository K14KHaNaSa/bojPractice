#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, ox, combo;
	cin >> n;
	combo = 0;
	int score = 0;
	for (int i = 0; i < n; i++) {
		cin >> ox;
		if (ox == 1) {
			combo++;
			score += combo;
		}
		else {
			combo = 0;
		}
	}
	cout << score;
}