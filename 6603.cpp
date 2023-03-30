#include <iostream>
#include <vector>
using namespace std;

int k;
int ans[6];
void bt(vector<int> num, int start, int nums) {
	if (nums == 6) {
		for (int i = 0; i < 6; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = start; i < k; i++) {
			ans[nums] = num[i];
			bt(num, i + 1, nums + 1);
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> k;
	while (k != 0) {
		vector<int> lotto(k);
		for (int i = 0; i < k; i++) {
			cin >> lotto[i];
		}
		bt(lotto, 0, 0);
		cout << "\n";
		cin >> k;
	}
}