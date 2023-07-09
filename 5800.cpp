#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, n;
	cin >> k;
	for (int i = 1; i <= k; i++) {
		cin >> n;
		vector<int> sc(n);
		for (int i = 0; i < n; i++) {
			cin >> sc[i];
		}
		sort(sc.rbegin(), sc.rend());
		cout << "Class " << i << "\nMax " << sc[0] << ", Min " << sc[n - 1] << ", Largest gap ";
		int g = sc[0] - sc[1];
		for (int i = 1; i < n - 1; i++) {
			g = max(g, sc[i] - sc[i + 1]);
		}
		cout << g << "\n";
	}
}