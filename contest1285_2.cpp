#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k, d, y;
	priority_queue<int> w;
	int day = 0;
	y = 0;
	cin >> n >> m >> k;
	while (n--) {
		cin >> d;
		day += (d - k) / m;
		if ((d - k) % m > 0)
			day++;
		w.push(d);
	}
	cout << day << "\n";
	while (!w.empty()) {
		int today = w.top();
		w.pop();
		y = y / 2 + today;
		cout << y << "\n";
		if (today - m > k)
			w.push(today - m);
	}
}