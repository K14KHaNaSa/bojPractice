#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, n, m;
	priority_queue<int> sj;
	priority_queue<int> sb;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		while (n--) {
			cin >> a;
			sj.push(a * -1);
		}
		while (m--) {
			cin >> a;
			sb.push(a * -1);
		}
		while (!sj.empty() && !sb.empty()) {
			if (sj.top() > sb.top())
				sj.pop();
			else
				sb.pop();
		}
		(sb.empty()) ? cout << "S\n" : cout << "B\n";
		while (!sj.empty())
			sj.pop();
		while (!sb.empty())
			sb.pop();
	}
}