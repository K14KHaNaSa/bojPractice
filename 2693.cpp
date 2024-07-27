#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, i;
	vector<int> n(10);
	cin >> t;
	while (t--) {
		for (i = 0; i < 10; i++)
			cin >> n[i];
		sort(n.begin(), n.end());
		cout << n[7] << '\n';
	}
}