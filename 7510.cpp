#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<int> tri(3);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> tri[j];
		}
		sort(tri.begin(), tri.end());
		cout << "Scenario #" << i + 1 << ":\n";
		if (tri[0] * tri[0] + tri[1] * tri[1] == tri[2] * tri[2]) {
			cout << "yes\n\n";
		}
		else {
			cout << "no\n\n";
		}
	}
}