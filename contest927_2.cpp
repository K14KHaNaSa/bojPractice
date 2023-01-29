#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x;
	cin >> n;
	string s;
	int count[4] = { 0, };
	// 0 = strawberry / 1 = banana / 2 = lime / 3 = plum
	for (int i = 0; i < n; i++) {
		cin >> s >> x;
		if (s == "STRAWBERRY") {
			count[0] += x;
		}
		else if (s == "BANANA") {
			count[1] += x;
		}
		else if (s == "LIME") {
			count[2] += x;
		}
		else if (s == "PLUM") {
			count[3] += x;
		}
	}
	bool ring = false;
	for (int i = 0; i < 4; i++) {
		if (count[i] == 5) {
			ring = true;
		}
	}
	if (ring) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}