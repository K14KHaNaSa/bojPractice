#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int score, s;
	int max = 0;
	int best;
	for (int i = 0; i < 5; i++) {
		score = 0;
		for (int j = 0; j < 4; j++) {
			cin >> s;
			score += s;
		}
		if (score > max) {
			best = i + 1;
			max = score;
		}
	}
	cout << best << " " << max;
}