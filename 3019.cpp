#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int c, p;
	cin >> c >> p;
	vector<int> blocklevel(c);
	for (int i = 0; i < c; i++) {
		cin >> blocklevel[i];
	}
	int blockcount = 0;
	if (p == 1) {
		for (int i = 0; i < c - 3; i++) {
			if (blocklevel[i] == blocklevel[i + 1] && blocklevel[i] == blocklevel[i + 2] && blocklevel[i] == blocklevel[i + 3]) {
				blockcount++;
			}
		}
		cout << blockcount + c;
	}
	else if (p == 2) {
		for (int i = 0; i < c - 1; i++) {
			if (blocklevel[i] == blocklevel[i + 1]) {
				blockcount++;
			}
		}
		cout << blockcount;
	}
	else if (p == 3) {
		for (int i = 0; i < c - 2; i++) {
			if (blocklevel[i] - 1 == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] == blocklevel[i + 1] && blocklevel[i] + 1 == blocklevel[i + 2]) {
				blockcount++;
			}
		}
		if (blocklevel[c - 2] - 1 == blocklevel[c - 1]) {
			blockcount++;
		}
		cout << blockcount;
	}
	else if (p == 4) {
		for (int i = 0; i < c - 2; i++) {
			if (blocklevel[i] + 1 == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] - 1 == blocklevel[i + 1] && blocklevel[i] - 1 == blocklevel[i + 2]) {
				blockcount++;
			}
		}
		if (blocklevel[c - 2] + 1 == blocklevel[c - 1]) {
			blockcount++;
		}
		cout << blockcount;
	}
	else if (p == 5) {
		for (int i = 0; i < c - 2; i++) {
			if (blocklevel[i] - 1 == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] + 1 == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] == blocklevel[i + 1] && blocklevel[i] == blocklevel[i + 2]) {
				blockcount++;
			}
			if (blocklevel[i] - 1 == blocklevel[i + 1] && blocklevel[i] == blocklevel[i + 2]) {
				blockcount++;
			}
		}
		if (blocklevel[c - 2] - 1 == blocklevel[c - 1]) {
			blockcount++;
		}
		if (blocklevel[c - 2] + 1 == blocklevel[c - 1]) {
			blockcount++;
		}
		cout << blockcount;
	}
	else if (p == 6) {
		for (int i = 0; i < c - 2; i++) {
			if (blocklevel[i] == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] - 2 == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] == blocklevel[i + 1] && blocklevel[i] == blocklevel[i + 2]) {
				blockcount++;
			}
			if (blocklevel[i] + 1 == blocklevel[i + 1] && blocklevel[i] + 1 == blocklevel[i + 2]) {
				blockcount++;
			}
		}
		if (blocklevel[c - 2] == blocklevel[c - 1]) {
			blockcount++;
		}
		if (blocklevel[c - 2] - 2 == blocklevel[c - 1]) {
			blockcount++;
		}
		cout << blockcount;
	}
	else if (p == 7) {
		for (int i = 0; i < c - 2; i++) {
			if (blocklevel[i] == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] + 2 == blocklevel[i + 1]) {
				blockcount++;
			}
			if (blocklevel[i] == blocklevel[i + 1] && blocklevel[i] == blocklevel[i + 2]) {
				blockcount++;
			}
			if (blocklevel[i] == blocklevel[i + 1] && blocklevel[i] - 1 == blocklevel[i + 2]) {
				blockcount++;
			}
		}
		if (blocklevel[c - 2] == blocklevel[c - 1]) {
			blockcount++;
		}
		if (blocklevel[c - 2] + 2 == blocklevel[c - 1]) {
			blockcount++;
		}
		cout << blockcount;
	}
}