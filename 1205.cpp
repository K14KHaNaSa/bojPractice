#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, ts, p;
	cin >> n >> ts >> p;
	vector<int> leaderboard(p, -1);
	vector<int> rank(p);
	if (n > 0) {
		rank[0] = 1;
		cin >> leaderboard[0];
		for (int i = 1; i < n; i++) {
			cin >> leaderboard[i];
			if (leaderboard[i] == leaderboard[i - 1]) {
				rank[i] = rank[i - 1];
			}
			else {
				rank[i] = i + 1;
			}
		}
	}
	for (int i = n; i < p; i++) {
		rank[i] = i + 1;
	}
	bool rankin = false;
	if (ts > leaderboard[0]) {
		cout << "1";
		rankin = true;
	}
	else {
		for (int i = 1; i < p; i++) {
			if (ts > leaderboard[i]) {
				if (ts == leaderboard[i - 1]) {
					cout << rank[i - 1];
				}
				else {
					cout << rank[i];
				}
				rankin = true;
				break;
			}
		}
	}
	if (!rankin) {
		cout << "-1";
	}
}