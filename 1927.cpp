#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> day(1500001);

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	priority_queue<int, vector<int>, greater<int>> pq;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (pq.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(x);
		}
	}
}