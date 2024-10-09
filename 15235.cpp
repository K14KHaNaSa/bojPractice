#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int p;
	int s[1001];
	queue<pair<int, int>> q;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p;
		q.push(make_pair(i, p));
		s[i] = 0;
	}
	int cnt = 1;
	while (!q.empty()) {
		int c = q.front().first;
		int p = q.front().second;
		q.pop();
		s[c] = cnt;
		cnt++;
		if (p > 1)
			q.push(make_pair(c, p - 1));
	}
	for (int i = 1; i <= n; i++)
		cout << s[i] << ' ';
}