#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> n(3);
	cin >> n[0] >> n[1] >> n[2];
	sort(n.begin(), n.end());
	if (n[0] + n[1] == n[2])
		cout << 1;
	else if (n[0] * n[1] == n[2])
		cout << 2;
	else
		cout << 3;
}