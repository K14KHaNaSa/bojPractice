#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b, temp;
	cin >> n >> m;
	vector<int> bag(n);
	for (int i = 0; i < n; i++) {
		bag[i] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		temp = bag[a - 1];
		bag[a - 1] = bag[b - 1];
		bag[b - 1] = temp;
	}
	for (int i = 0; i < n; i++) {
		cout << bag[i] << " ";
	}
}