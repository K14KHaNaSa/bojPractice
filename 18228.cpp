#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	unsigned long int answer = 0;
	unsigned long int minpower = 1000000001;
	unsigned long int block;
	for (int i = 0; i < n; i++) {
		cin >> block;
		if (block == -1) {
			answer += minpower;
			minpower = 1000000001;
		}
		else {
			minpower = min(minpower, block);
		}
	}
	cout << answer + minpower;
}