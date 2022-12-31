#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int high = -1;
	int low = 1001;
	int n, score;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score;
		if (score < low) {
			low = score;
		}
		if (score > high) {
			high = score;
		}
	}
	cout << high - low;
}