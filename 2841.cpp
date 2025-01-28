#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	stack<int> l[6];
	int n, p, a, b, ans;
	cin >> n >> p;
	ans = 0;
	while (n--) {
		cin >> a >> b;
		if (l[a - 1].empty()) {
			l[a - 1].push(b);
			ans++;
		}
		else {
			while (!l[a - 1].empty()) {
				if (l[a - 1].top() == b) {
					break;
				}
				else if (l[a - 1].top() < b) {
					l[a - 1].push(b);
					ans++;
					break;
				}
				else {
					l[a - 1].pop();
					ans++;
				}
			}
			if (l[a - 1].empty()) {
				l[a - 1].push(b);
				ans++;
			}
		}
	}
	cout << ans;
}