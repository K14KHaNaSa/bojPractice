#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int stud[100001];
int seat[100001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, c, k, t, s, n;
	cin >> x >> c >> k;
	vector<pair<int, pair<int, int>>> log;
	for (int i = 0; i < k; i++) {
		cin >> t >> s >> n;
		log.push_back(make_pair(t, make_pair(s, n)));
	}
	sort(log.begin(), log.end());
	for (int i = 1; i <= x; i++)
		stud[i] = 0;
	for (int i = 1; i <= c; i++)
		seat[i] = 0;
	for (int i = 0; i < k; i++) {
		s = log[i].second.first;
		n = log[i].second.second;
		if (seat[s] == 0) {
			seat[s] = n;
			if (stud[n] != 0)
				seat[stud[n]] = 0;
			stud[n] = s;
		}
	}
	for (int i = 1; i <= x; i++) {
		if (stud[i] > 0)
			cout << i << ' ' << stud[i] << '\n';
	}
}