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
	vector<int> x(n);
	vector<int> index(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i];
		index[i] = x[i];
	}
	sort(index.begin(), index.end());
	index.erase(unique(index.begin(), index.end()), index.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(index.begin(), index.end(), x[i]) - index.begin() << " ";
	}
}