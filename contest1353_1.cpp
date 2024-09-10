#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, c, x, h, cx, cy, i;
	cin >> n >> m;
	vector<pair<int, pair<int, int>>> qqe;
	for (i = 0; i < m; i++) {
		cin >> c >> x >> h;
		qqe.push_back(make_pair(x, make_pair(c, h)));
	}
	sort(qqe.begin(), qqe.end());
	bool fly = true;
	cx = 0;
	cy = 0;
	for (i = 0; i < m; i++) {
		c = qqe[i].second.first;
		x = qqe[i].first;
		h = qqe[i].second.second;
		if (c == 0)
			cy = max(h + 1, cy - (x - cx));
		else { // c == 1
			cy -= x - cx;
			if (cy >= h) {
				fly = false;
				break;
			}
		}
		cx = x;
	}
	// last qqe ~ N
	if (cy - (n - cx) > 0)
		fly = false;
	fly ? cout << "stay" : cout << "adios";
}