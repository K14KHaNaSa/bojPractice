#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> book[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc, n, m, a, b, ans;
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		while (m--) {
			cin >> a >> b;
			book[a - 1].push_back(b - 1);
		}
		ans = 0;
		priority_queue<int> b;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < book[i].size(); j++) {
				b.push(-1 * book[i].at(j));
			}
			if (!b.empty()) {
				b.pop();
				ans++;
				while (!b.empty() && -1 * b.top() == i) {
					b.pop();
				}
			}
		}
		cout << ans << "\n";
		for (int i = 0; i < n; i++) {
			book[i].clear();
		}
	}
}