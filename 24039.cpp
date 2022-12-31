#include <iostream>
using namespace std;

int pnum[20000] = { 0 };
int main(void) {
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 2; i <= 200; i++) {
		if (pnum[i] == 0) {
			for (int j = 2; i * j <= 20000; j++) {
				pnum[i * j] = 1;
			}
		}
	}
	pnum[0] = 1;
	pnum[1] = 1;
	pnum[2] = 0;
	pnum[3] = 0;
	int left = 1;
	if (n == 1) {
		cout << 6;
	}
	else {
		for (int i = 1; i <= 20000; i++) {
			if (pnum[i] == 0) {
				if (left * i > n) {
					cout << left * i;
					break;
				}
				else {
					left = i;
				}
			}
		}
	}
}