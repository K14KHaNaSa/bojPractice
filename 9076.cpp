#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	vector<int> s(5);
	cin >> t;
	while (t--) {
		for (int i = 0; i < 5; i++)
			cin >> s[i];
		sort(s.begin(), s.end());
		(s[3] - s[1] > 3) ? cout << "KIN\n" : cout << s[1] + s[2] + s[3] << '\n';
	}
}