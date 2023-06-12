#include <iostream>
#include <queue>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc, n;
	char area;
	cin >> tc;
	while (tc--) {
		cin >> n;
		int su, sv, pu, pv;
		queue<pair<int, int>> p;
		for (int i = 0; i < n; i++) {
			area = cin.get();
			for (int j = 0; j < n; j++) {
				area = cin.get();
				if (area == 's') {
					su = i;
					sv = j;
				}
				else if (area == 'p') {
					p.push(make_pair(i, j));
				}
			}
		}
		double answer = 1000000000;
		while (!p.empty()) {
			double dist = sqrt(pow(su - p.front().first, 2) + pow(sv - p.front().second, 2));
			if (dist < answer) {
				pu = p.front().first;
				pv = p.front().second;
				answer = dist;
			}
			p.pop();
		}
		cout << "(" << su << "," << sv << "):(" << pu << "," << pv << "):" << fixed << setprecision(2) << answer << "\n";
	}
}