#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, mp;
	char ttl;
	queue<char> gt;
	cin >> n;
	while (n--) {
		ttl = cin.get();
		ttl = cin.get();
		while (ttl != ',') {
			gt.push(ttl);
			ttl = cin.get();
		}
		cin >> mp;
		while (!gt.empty()) {
			cout << gt.front();
			gt.pop();
		}
		cout << " - ";
		int h = mp / 60;
		mp %= 60;
		int d = h / 24;
		h %= 24;
		int y = d / 365;
		d %= 365;
		if (y > 0) {
			cout << y << " year(s) ";
		}
		if (d > 0) {
			cout << d << " day(s) ";
		}
		if (h > 0) {
			cout << h << " hour(s) ";
		}
		cout << mp << " minute(s)\n";
	}
}