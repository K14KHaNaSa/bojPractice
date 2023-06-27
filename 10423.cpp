#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> cable[100000];
bool connected[1000];
int pp[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k, a, b, c;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		connected[i] = false;
	}
	for (int i = 0; i < k; i++) {
		cin >> a;
		pp[i] = a - 1;
		connected[a - 1] = true;
	}
	while (m--) {
		cin >> a >> b >> c;
		cable[a - 1].push_back(make_pair(b - 1, c));
		cable[b - 1].push_back(make_pair(a - 1, c));
	}
	priority_queue<pair<int, int>> lnk;
	int answer = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < cable[pp[i]].size(); j++) {
			lnk.push(make_pair(-1 * cable[pp[i]].at(j).second, cable[pp[i]].at(j).first));
		}
	}
	while (!lnk.empty()) {
		int cleng = -1 * lnk.top().first;
		int city = lnk.top().second;
		lnk.pop();
		if (!connected[city]) {
			answer += cleng;
			connected[city] = true;
			for (int i = 0; i < cable[city].size(); i++) {
				int nextcity = cable[city].at(i).first;
				int nextleng = cable[city].at(i).second;
				if (!connected[nextcity]) {
					lnk.push(make_pair(-1 * nextleng, nextcity));
				}
			}
		}
	}
	cout << answer;
}