#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, psh;
	queue<int> q;
	string order;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push") {
			cin >> psh;
			q.push(psh);
		}
		else if (order == "pop") {
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (order == "size") {
			cout << q.size() << "\n";
		}
		else if (order == "empty") {
			if (q.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (order == "front") {
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else if (order == "back") {
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
	}
}