#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, score;
	vector<unsigned long long int> step1(301);
	vector<unsigned long long int> step2(301);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> score;
		if (i <= 2) {
			if (i == 1) {
				step1[1] = score;
				step2[1] = 0;
			}
			if (i == 2) {
				step1[2] = step1[1] + score;
				step2[2] = score;
			}
		}
		else {
			step1[i] = step2[i - 1] + score;
			if (step1[i - 2] > step2[i - 2]) {
				step2[i] = step1[i - 2] + score;
			}
			else {
				step2[i] = step2[i - 2] + score;
			}
		}
	}
	if (step1[n] > step2[n]) {
		cout << step1[n];
	}
	else {
		cout << step2[n];
	}
}