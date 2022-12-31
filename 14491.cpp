#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n;
	int startpoint = 6;
	vector<int> nine(5);
	cin >> n;
	if (n / 6561) {
		nine[0] = n / 6561;
		n -= 6561;
		startpoint = 0;
	}
	if (n / 729) {
		nine[1] = n / 729;
		n %= 729;
		if (startpoint != 0) {
			startpoint = 1;
		}
	}
	if (n / 81) {
		nine[2] = n / 81;
		n %= 81;
		if (startpoint > 1) {
			startpoint = 2;
		}
	}
	if (n / 9) {
		nine[3] = n / 9;
		n %= 9;
		if (startpoint > 2) {
			startpoint = 3;
		}
	}
	nine[4] = n;
	if (startpoint > 3) {
		startpoint = 4;
	}
	for (int i = 0; i < 5; i++) {
		if (startpoint <= i) {
			cout << nine[i];
		}
	}
}