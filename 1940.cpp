#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int over = 0;
	vector<int> armor(n);
	for (int i = 0; i < n; i++) {
		cin >> armor[i];
		if (armor[i] > m) {
			over++;
		}
	}
	sort(armor.begin(), armor.end());
	int answer = 0;
	int left = 0;
	int right = n - 1 - over;
	while (right - left > 0) {
		int combine = armor[left] + armor[right];
		if (combine == m) {
			answer++;
			left++;
			right--;
		}
		else if (combine < m) {
			left++;
		}
		else if (combine > m) {
			right--;
		}
	}
	cout << answer;
}