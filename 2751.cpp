#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> su(n);
	for (int i = 0; i < n; i++) {
		cin >> su[i];
	}
	sort(su.begin(), su.end());
	for (int i = 0; i < n; i++) {
		cout << su[i] << "\n";
	}
}