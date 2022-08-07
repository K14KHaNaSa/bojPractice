#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, input;
	vector<int> temp(100001);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> input;
		temp[i] = input + temp[i - 1];
	}
	int maxsum = -100 * k - 1;
	for (int i = k; i <= n; i++) {
		maxsum = max(maxsum, temp[i] - temp[i - k]);
	}
	cout << maxsum;	
}