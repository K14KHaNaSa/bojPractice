#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, w, d, p;
	string s;
	vector<pair<string, pair<int, int>>> meeting;
	bool bab[77];
	for (int i = 7; i < 77; i++)
		bab[i] = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> w >> d >> p;
		meeting.push_back(make_pair(s, make_pair(w * 7 + d, p)));
	}
	vector<pair<string, int>> m;
	for (int i = 0; i < n; i++) {
		cin >> s >> p;
		for (int j = 0; j < n; j++) {
			if (meeting[j].first == s) {
				if (meeting[j].second.second <= p)
					bab[meeting[j].second.first] = true;
			}
		}
	}
	int combo = 0;
	int ans = 0;
	for (int i = 7; i < 77; i++) {
		if (bab[i])
			combo++;
		else
			combo = 0;
		ans = max(ans, combo);
	}
	cout << ans;
}