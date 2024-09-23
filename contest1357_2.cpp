#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, q, x, m, ans, r;
	priority_queue<long long int> left;
	priority_queue<long long int> right;
	cin >> n;
	ans = 0;
	m = 0; // mingyu's now state
	while (n--) {
		cin >> q;
		if (q == 1) {
			cin >> x;
			if (x > m)
				right.push(-1 * (x + 100000000));
			else
				left.push(x);
		}
		else { // q = 2
			while (!(left.empty() && right.empty())) {
				if (left.empty()) {
					while (!right.empty()) {
						r = (right.top() * -1) - 100000000;
						ans += (r - m);
						m = r;
						right.pop();
					}
				}
				else if (right.empty()) {
					while (!left.empty()) {
						ans += (m - left.top());
						m = left.top();
						left.pop();
					}
				}
				else {
					r = (right.top() * -1) - 100000000;
					if (m - left.top() <= r - m) { // go left
						ans += (m - left.top());
						m = left.top();
						left.pop();
					}
					else { // go right
						ans += (r - m);
						m = r;
						right.pop();
					}
				}
			}
		}
	}
	cout << ans;
}