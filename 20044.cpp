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
	vector<int> w(n * 2);
	for (int i = 0; i < n * 2; i++) {
		cin >> w[i];
	}
	sort(w.begin(), w.end());
	int answer = w[0] + w[n * 2 - 1];
	for (int i = 1; i < n; i++) {
		answer = min(answer, w[i] + w[n * 2 - 1 - i]);
	}
	cout << answer;
}