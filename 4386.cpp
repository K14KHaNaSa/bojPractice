#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

bool visit[100];
double star[100][2]; // { x, y }
double sdist[100][100]; // star distance

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> star[i][0] >> star[i][1];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sdist[i][j] = sqrt(pow(star[i][0] - star[j][0], 2) + pow(star[i][1] - star[j][1], 2));
		}
		visit[i] = false;
	}
	double answer = 0;
	visit[0] = true;
	priority_queue<pair<double, int>> lnk;
	for (int i = 1; i < n; i++) {
		lnk.push(make_pair(-1 * sdist[0][i], i));
	}
	while (!lnk.empty()) {
		double btwn = -1 * lnk.top().first;
		int s = lnk.top().second;
		lnk.pop();
		if (!visit[s]) {
			visit[s] = true;
			answer += btwn;
			for (int i = 0; i < n; i++) {
				if (i != s && !visit[i]) {
					lnk.push(make_pair(-1 * sdist[s][i], i));
				}
			}
		}
	}
	cout << answer;
}