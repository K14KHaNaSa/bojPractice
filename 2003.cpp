#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, ax;
	int numsum = 0;
	int answer = 0;
	queue<int> as;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> ax;
		as.push(ax);
		numsum += ax;
		while ((numsum >= m) && !as.empty()) {
			if (numsum == m) {
				answer++;
			}
			numsum -= as.front();
			as.pop();
		}
	}
	cout << answer;
}