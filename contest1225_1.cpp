#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, a, b;
	cin >> n >> k;
	int mol = 0;
	vector<int> more_k;
	while (n--) {
		cin >> a >> b;
		if (a < b)
			more_k.push_back(b - a);
		else
			mol++;
	}
	sort(more_k.begin(), more_k.end());
	if (mol < k)
		cout << more_k[k - mol - 1];
	else
		cout << 0;
}