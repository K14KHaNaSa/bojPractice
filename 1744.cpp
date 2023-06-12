#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, npt, a, b;
	priority_queue<int> plus;
	int one = 0;
	int zero = 0;
	priority_queue<int> minus;
	int answer = 0;
	cin >> n;
	while (n--) {
		cin >> npt;
		if (npt > 1) {
			plus.push(npt);
		}
		else if (npt == 1) {
			one++;
		}
		else if (npt < 0) {
			minus.push(-1 * npt);
		}
		else {
			zero++;
		}
	}
	while (minus.size() > 1) {
		a = minus.top();
		minus.pop();
		b = minus.top();
		minus.pop();
		answer += a * b;
	}
	if (!minus.empty()) {
		a = minus.top();
		if (zero == 0) {
			answer -= a;
		}
	}
	while (plus.size() > 1) {
		a = plus.top();
		plus.pop();
		b = plus.top();
		plus.pop();
		answer += a * b;
	}
	if (!plus.empty()) {
		answer += plus.top();
	}
	answer += one;
	cout << answer;
}