#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> energy(n);
	for (int i = 0; i < n; i++) {
		cin >> energy[i];
	}
	sort(energy.begin(), energy.end());
	float drink = 0;
	for (int i = 0; i < n - 1; i++) {
		drink += energy[i];
	}
	drink /= 2;
	cout << drink + energy[n - 1];
}