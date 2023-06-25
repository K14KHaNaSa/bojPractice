#include <iostream>
#include <queue>
using namespace std;

int nlev[1000002];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int c, m;
	int mlev = 0;
	cin >> c;
	bool ok = true;
	queue<int> ans;
	while (c--) {
		cin >> m;
		if (m == mlev + 1) {
			mlev++;
		}
		else if (m > mlev) {
			ok = false;
		}
		nlev[m]++;
		ans.push(nlev[m]);
		nlev[m + 1] = 0;
	}
	if (!ok) {
		cout << "-1";
	}
	else {
		while (!ans.empty()) {
			cout << ans.front() << " ";
			ans.pop();
		}
	}
}