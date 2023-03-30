#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, s, ax;
	int numsum = 0;
	int answer = 100001;
	queue<int> as;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> ax;
		as.push(ax);
		numsum += ax;
		while ((numsum >= s) && !as.empty()) {
			int length = as.size();
			answer = min(answer, length);
			numsum -= as.front();
			as.pop();
		}
	}
	if (answer > 100000) {
		cout << "0";
	}
	else {

		cout << answer;
	}
}