#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> trues(51);
	int n, a;
	bool trueexist = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		trues[a]++;
	}
	for (int i = 50; i > 0; i--) {
		if (trues[i] == i) {
			cout << i;
			trueexist = true;
			break;
		}
	}
	if (!trueexist) {
		if (trues[0] == 0) {
			cout << 0;
		}
		else {
			cout << -1;
		}
	}
}