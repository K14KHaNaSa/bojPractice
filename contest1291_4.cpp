#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, shake, apc;
	string name, jh, i;
	vector <pair<int, pair<pair<string, string>, pair<int, string>>>> now_apc;
	vector<string> next_shake;
	cin >> n;
	for (int j = 0; j < n; j++) {
		cin >> name >> jh >> i >> shake >> apc;
		now_apc.push_back(make_pair(apc, make_pair(make_pair(jh, i), make_pair(shake, name))));
	}
	sort(now_apc.begin(), now_apc.end());
	for (int j = 0; j < n; j++) {
		name = now_apc[j].second.second.second;
		jh = now_apc[j].second.first.first;
		i = now_apc[j].second.first.second;
		shake = now_apc[j].second.second.first;
		apc = now_apc[j].first;

		if (jh == "jaehak" && i == "notyet" && (shake > 3 || shake == -1))
			next_shake.push_back(name);
		if (next_shake.size() == 10)
			break;
	}
	sort(next_shake.begin(), next_shake.end());
	cout << next_shake.size() << "\n";
	for (int j = 0; j < next_shake.size(); j++)
		cout << next_shake[j] << "\n";
}