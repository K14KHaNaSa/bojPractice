#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	char mz;
	int k = 0;
	int y = 0;
	bool finished = false;
	bool answer; // false = Y / true = K
	mz = cin.get();
	while (mz != EOF) {
		if (mz == 'Y' && y == 0) {
			y = 1;
		}
		else if (mz == 'K' && k == 0) {
			k = 1;
		}
		else if (mz == 'O') {
			if (y == 1) {
				y = 2;
			}
			if (k == 1) {
				k = 2;
			}
		}
		else if (mz == 'N' && y == 2) {
			y = 3;
		}
		else if (mz == 'R' && k == 2) {
			k = 3;
		}
		else if (mz == 'S' && y == 3) {
			y = 4;
		}
		else if (mz == 'E') {
			if (y == 4) {
				y = 5;
			}
			if (k == 3) {
				k = 4;
			}
		}
		else if (mz == 'I' && y == 5) {
			y = 6;
			if (!finished) {
				finished = true;
				answer = false;
			}
		}
		else if (mz == 'A' && k == 4) {
			k = 5;
			if (!finished) {
				finished = true;
				answer = true;
			}
		}
		mz = cin.get();
	}
	if (answer) {
		cout << "KOREA";
	}
	else {
		cout << "YONSEI";
	}
}