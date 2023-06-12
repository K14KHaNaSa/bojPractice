#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, w, h;
	cin >> n;
	char order;
	int r = 0;
	int u = 0;
	int x = 0;
	order = cin.get();
	while (n--) {
		order = cin.get();
		if (order == 'R') {
			r++;
		}
		else if (order == 'U') {
			u++;
		}
		else if (order == 'X') {
			x++;;
		}
	}
	cin >> k;
	int answer = 0;
	while (k--) {
		cin >> w >> h;
		w--;
		h--;
		if (w >= x && h >= x) {
			w -= x;
			h -= x;
		}
		else {
			int mn = min(w, h);
			w -= mn;
			h -= mn;
		}
		if (w <= r && h <= u) {
			answer++;
		}
	}
	cout << answer;
}