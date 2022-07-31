#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<int> costMax(1001);
	int n, input, maxVal;
	cin >> n;
	cin >> costMax[1];
	for (int i = 2; i <= n; i++) {
		cin >> input;
		maxVal = input;
		for (int j = 1; j < i; j++) {
			maxVal = max(maxVal, costMax[j]+costMax[i-j]);
		}
		costMax[i] = maxVal;
	}
	cout << costMax[n];
}