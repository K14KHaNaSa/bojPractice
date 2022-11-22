#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	bool finish = false;
	int mush;
	int score = 0;
	int over = 1001;
	int under = 0;
	for (int i = 0; i < 10; i++) {
		cin >> mush;
		score += mush;
		if (score >= 100 && !finish) {
			over = score;
			finish = true;
		}
		else if(!finish) {
			under = score;
		}
	}
	if (over - 100 <= 100 - under) {
		cout << over;
	}
	else {
		cout << under;
	}
}