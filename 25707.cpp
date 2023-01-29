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
	vector<int> beads(n);
	for (int i = 0; i < n; i++) {
		cin >> beads[i];
	}
	sort(beads.begin(), beads.end());
	int answer = beads[n - 1] - beads[0];
	for (int i = 0; i < n - 1; i++) {
		answer += beads[i + 1] - beads[i];
	}
	cout << answer;
}