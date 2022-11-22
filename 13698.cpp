#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int cup[5];
	cup[1] = 1;
	cup[2] = 0;
	cup[3] = 0;
	cup[4] = 2;
	char pattern;
	pattern = cin.get();
	while (pattern != '\n') {
		if (pattern == 'A') {
			cup[0] = cup[1];
			cup[1] = cup[2];
			cup[2] = cup[0];
		}
		else if (pattern == 'B') {
			cup[0] = cup[3];
			cup[3] = cup[1];
			cup[1] = cup[0];
		}
		else if (pattern == 'C') {
			cup[0] = cup[4];
			cup[4] = cup[1];
			cup[1] = cup[0];
		}
		else if (pattern == 'D') {
			cup[0] = cup[3];
			cup[3] = cup[2];
			cup[2] = cup[0];
		}
		else if (pattern == 'E') {
			cup[0] = cup[4];
			cup[4] = cup[2];
			cup[2] = cup[0];
		}
		else if (pattern == 'F') {
			cup[0] = cup[4];
			cup[4] = cup[3];
			cup[3] = cup[0];
		}
		pattern = cin.get();
	}
	int sm, b;
	for (int i = 1; i < 5; i++) {
		if (cup[i] != 0) {
			if (cup[i] == 1) {
				sm = i;
			}
			else if (cup[i] == 2) {
				b = i;
			}
		}
	}
	cout << sm << "\n" << b;
}