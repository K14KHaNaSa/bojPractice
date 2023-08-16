#include <iostream>
#include <queue>
using namespace std;
//78% WA
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, ai, bi;
	cin >> n >> m;
	bool yn = true;
	priority_queue<pair<int, int>> ateam;
	priority_queue<pair<int, int>> bteam;
	queue<pair<int, int>> ans;
	queue<pair<int, int>> tmp;
	for (int i = 1; i <= n; i++) {
		cin >> ai;
		if (ai > 0) {
			ateam.push(make_pair(ai, i));
		}
	}
	for (int i = 1; i <= m; i++) {
		cin >> bi;
		if (bi > 0) {
			bteam.push(make_pair(bi, i));
		}
	}
	if (ateam.empty()) {
		yn = false;
	}
	else {
		while (!ateam.empty()) {
			int amon = ateam.top().second;
			int know = ateam.top().first;
			ateam.pop();
			if (bteam.size() < know) {
				yn = false;
				break;
			}
			else {
				for (int i = 0; i < know; i++) {
					int bmon = bteam.top().second;
					int bknw = bteam.top().first;
					bteam.pop();
					ans.push(make_pair(amon, bmon));
					if (bknw > 1) {
						tmp.push(make_pair(bknw - 1, bmon));
					}
				}
				while (!tmp.empty()) {
					bteam.push(make_pair(tmp.front().first, tmp.front().second));
					tmp.pop();
				}
			}
		}
	}
	if (!bteam.empty()) {
		yn = false;
	}
	if (!yn) {
		cout << "NO";
	}
	else {
		cout << "YES\n" << ans.size() << "\n";
		while (!ans.empty()) {
			cout << ans.front().first << " " << ans.front().second << "\n";
			ans.pop();
		}
	}
}