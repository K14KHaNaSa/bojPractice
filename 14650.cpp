#include <iostream>
using namespace std;

unsigned long int sam[33334];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	sam[0] = 0;
	sam[1] = 0;
	sam[2] = 2;
	int n;
	for (int i = 3; i < 33334; i++) {
		sam[i] = (sam[i - 1] * 3) % 1000000009;
	}
	cin >> n;
	cout << sam[n];
}