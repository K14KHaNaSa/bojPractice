#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char m[5][5];
	char c;
	int k = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			m[i][j] = cin.get();
			if (m[i][j] == 'k')
				k++;
		}
		c = cin.get(); // \n
	}
	if (k != 9)
		cout << "invalid";
	else {
		bool v = true;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (m[i][j] == 'k') {
					if (i > 0) {
						if (j > 2) {
							if (m[i - 1][j - 2] == 'k')
								v = false;
						}
						if (j < 3) {
							if (m[i - 1][j + 2] == 'k')
								v = false;
						}
					}
					if (i > 1) {
						if (j > 0) {
							if (m[i - 2][j - 1] == 'k')
								v = false;
						}
						if (j < 4) {
							if (m[i - 2][j + 1] == 'k')
								v = false;
						}
					}
					if (i < 4) {
						if (j > 2) {
							if (m[i + 1][j - 2] == 'k')
								v = false;
						}
						if (j < 3) {
							if (m[i + 1][j + 2] == 'k')
								v = false;
						}
					}
					if (i < 3) {
						if (j > 0) {
							if (m[i + 2][j - 1] == 'k')
								v = false;
						}
						if (j < 4) {
							if (m[i + 2][j + 1] == 'k')
								v = false;
						}
					}
				}
			}
		}
		v ? cout << "valid" : cout << "invalid";
	}
}