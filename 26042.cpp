#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	int ans_len = 0;
	int ans_b = 1000001;
	cin >> n;
	queue<int> w;
	while (n--) {
		cin >> a;
		if (a == 1) {
			cin >> b;
			if (ans_len - 1 == w.size()) {
				ans_len = w.size() + 1;
				ans_b = min(ans_b, b);
			}
			else if (ans_len == w.size()) {
				ans_len = w.size() + 1;
				ans_b = b;
			}
			w.push(b);
		}
		if (a == 2)
			w.pop();
	}
	cout << ans_len << ' ' << ans_b;
}