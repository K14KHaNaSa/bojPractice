#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> a(3);
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	sort(a.rbegin(), a.rend());
	(((a[0] == a[1]) || (a[0] == a[1] + a[2])) || (a[1] == a[2])) ? cout << 'S' : cout << 'N';
}