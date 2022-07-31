#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, wine;
	vector<unsigned long long int> drink1(10001);
	vector<unsigned long long int> drink2(10001);
	//vector<unsigned long long int> drink2max(10001);
	cin >> n;
	int drink2max = 0;
	for (int i = 1; i <= n; i++) {
		cin >> wine;
		if (i <= 2) {
			if (i == 1) {
				drink1[1] = wine;
				drink2[1] = 0;
				drink2max = 0;
			}
			if (i == 2) {
				drink1[2] = wine;
				drink2[2] = drink1[1] + wine;
			}
		}
		else {
			if (drink2[i - 2] > drink2max) {
				drink2max = drink2[i - 2];
			}
			drink2[i] = drink1[i - 1] + wine;

			if (drink2max > drink1[i - 2] && drink2max > drink2[i - 2]) {
				drink1[i] = drink2max + wine;
			}
			else if (drink1[i - 2] > drink2[i - 2]) {
				drink1[i] = drink1[i - 2] + wine;
			}
			else {
				drink1[i] = drink2[i - 2] + wine;
			}
		}
	}
	if (drink2[n - 1] > drink1[n] && drink2[n - 1] > drink2[n]) {
		cout << drink2[n - 1];
	}
	else if (drink1[n] > drink2[n]) {
		cout << drink1[n];
	}
	else {
		cout << drink2[n];
	}
}