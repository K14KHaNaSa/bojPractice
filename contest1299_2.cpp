#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string ps[1000][2];
	queue<pair<string, string>> couple;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ps[i][0] >> ps[i][1];
	
	int same_ring;
	int same_p;
	for (int i = 0; i < n; i++) {
		if (ps[i][1] != "-") {
			same_ring = 0;
			same_p = 0;
			for (int j = 0; j < n; j++) {
				if (i == j) continue;
				if (ps[j][1] == ps[i][1]) {
					same_p = j;
					same_ring++;
				}
			}
			if (same_ring == 1) {
				couple.push(make_pair(ps[i][0], ps[same_p][0]));
				ps[i][1] = "-";
				ps[same_p][1] = "-";
			}
		}
	}
	cout << couple.size() << "\n";
	while (!couple.empty()) {
		cout << couple.front().first << " " << couple.front().second << "\n";
		couple.pop();
	}
}