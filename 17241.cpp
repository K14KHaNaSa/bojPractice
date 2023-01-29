#include <iostream>
#include <vector>
using namespace std;

vector<int> house[200001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, q, from, to, deliver;
	cin >> n >> m >> q;
	vector<bool> pizza(n + 1);
	for (int i = 0; i < m; i++) {
		cin >> from >> to;
		house[from].push_back(to);
		house[to].push_back(from);
	}
	for (int i = 0; i < q; i++) {
		cin >> deliver;
		int answer = 0;
		if (pizza[deliver] == false) {
			answer++;
			pizza[deliver] = true;
		}
		int searchhouse = house[deliver].size();
		for (int j = 0; j < searchhouse; j++) {
			if (pizza[house[deliver].at(j)] == false) {
				pizza[house[deliver].at(j)] = true;
				answer++;
			}
		}
		house[deliver].clear();
		cout << answer << "\n";
	}
}