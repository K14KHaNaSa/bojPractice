#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ball = 0;
	int answer = 0;
	int n;
	char lr;
	cin >> n;
	lr = cin.get();
	for (int i = 0; i < n; i++) {
		lr = cin.get();
		if (lr == 'L') {
			if (ball > 0) {
				ball--;
			}
		}
		if (lr == 'R') {
			if (ball < 2) {
				ball++;
				if (ball == 2) {
					answer++;
				}
			}
			else {
				answer++;
			}
		}
	}
	cout << answer;
}