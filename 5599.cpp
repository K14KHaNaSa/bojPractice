#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	cin >> n >> m;
	queue<int> q;
	queue<int> temp_a;
	queue<int> temp_b;
	for (int i = 1; i <= n * 2; i++)
		q.push(i);
	while (m--) {
		cin >> k;
		if (k > 0) {
			while (k--) {
				q.push(q.front());
				q.pop();
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				temp_a.push(q.front());
				q.pop();
			}
			while (!q.empty()) {
				temp_b.push(q.front());
				q.pop();
			}
			for (int i = 0; i < n; i++) {
				q.push(temp_a.front());
				q.push(temp_b.front());
				temp_a.pop();
				temp_b.pop();
			}
		}
	}
	while (!q.empty()) {
		cout << q.front() << '\n';
		q.pop();
	}
}