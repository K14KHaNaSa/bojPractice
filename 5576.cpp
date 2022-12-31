#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> w(10);
	vector<int> k(10);
	for (int i = 0; i < 10; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> k[i];
	}
	sort(w.rbegin(), w.rend());
	sort(k.rbegin(), k.rend());
	cout << w[0] + w[1] + w[2] << " " << k[0] + k[1] + k[2];
}