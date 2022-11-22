#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	vector<int> n(9);
	int lensum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> n[i];
		lensum += n[i];
	}
	sort(n.begin(), n.end());
	int tgt1, tgt2;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (lensum - (n[i] + n[j]) == 100) {
				tgt1 = i;
				tgt2 = j;
				break;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i != tgt1 && i != tgt2) {
			cout << n[i] << "\n";
		}
	}
}