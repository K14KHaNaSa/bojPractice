#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, d, g, nowscore;
	int maxscore = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> d >> g;
		nowscore = a * (d + g);
		if (a == (d + g)) {
			nowscore *= 2;
		}
		maxscore = max(maxscore, nowscore);
	}
	cout << maxscore;
}