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
	vector<int> growdayz(n);
	int welcome = 0;
	for (int i = 0; i < n; i++) {
		cin >> growdayz[i];
	}
	sort(growdayz.rbegin(), growdayz.rend());
	for (int i = 0; i < n; i++) {
		if (welcome < growdayz[i] + i + 1) {
			welcome = growdayz[i] + i + 1;
		}
	}
	cout << welcome + 1;
}