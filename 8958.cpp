#include <iostream>
#include <cstring>
using namespace std;
int combo, score;
int main(void) {
	ios_base::sync_with_stdio(false);
	int tc;
	string ox;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		combo, score = 0;
		cin >> ox;
		for (int j = 0; j <= ox.length(); j++) {
			if (ox[j] == 'O') {
				combo += 1;
			}
			else {
				for (int k = combo; k > 0; --k) {
					//combo reset!
					score = k + score;
				}
				combo = 0;
			}
		}
		cout << score << "\n";
	}
}