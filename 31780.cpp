#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, m, z;
	priority_queue<int> p;
	queue<int> temp;
	cin >> x >> m;
	p.push(x);
	int ans = x;
	while (m--) {
		while (!p.empty()) {
			z = p.top();
			p.pop();
			temp.push(z / 2);
			(z % 2 > 0) ? temp.push(z / 2 + 1) : temp.push(z / 2);
		}
		while (!temp.empty()) {
			p.push(temp.front());
			ans += temp.front();
			temp.pop();
		}
	}
	cout << ans;
}