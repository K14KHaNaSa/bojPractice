#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<pair<int, int>> day(16);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> day[i].first >> day[i].second;
	}
	for (int i = n; i > 0; i--) {
		int maxmidCost = 0;
		if (i + day[i].first <= n+1) {
			for (int j = i + day[i].first; j <= n; j++) {
				maxmidCost = max(maxmidCost, day[j].second);
			}
			day[i].second += maxmidCost;
		}
		else {
			day[i].second = 0;
		}
	}
	int maxCost = 0;
	day[0].second = 0;
	for (int i = 1; i <= n; i++) {
		if (i + day[i].first <= n + 1) {
			maxCost = max(day[i].second, maxCost);
		}
	}
	cout << maxCost;
}