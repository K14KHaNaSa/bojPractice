#include <iostream>
#include <deque>
#include <cstring>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, psh;
	deque<int> dq;
	string order;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push_front") {
			cin >> psh;
			dq.push_front(psh);
		}
		else if (order == "push_back") {
			cin >> psh;
			dq.push_back(psh);
		}
		else if (order == "pop_front") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (order == "pop_back") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (order == "size") {
			cout << dq.size() << "\n";
		}
		else if (order == "empty") {
			if (dq.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (order == "front") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		}
		else if (order == "back") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
			}
		}
	}
}