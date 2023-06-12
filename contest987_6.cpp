#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	deque<int> q; // 0 = ball / 1 = wall
	int rtype = 0; // rotation type / 
	// 0 = b--f // 1 = | (b up) // 2 = f--b // 3 = | (fup)
	int walls = 0;
	int balls = 0;
	string orders;
	char orderback;
	int qr;
	cin >> qr;
	while (qr--) {
		cin >> orders;
		if (orders == "count") {
			cin >> orderback;
			if (orderback == 'b') {
				cout << balls << "\n";
			}
			else if (orderback == 'w') {
				cout << walls << "\n";
			}
		}
		else if (orders == "rotate") {
			cin >> orderback;
			if (orderback == 'l') {
				rtype--;
				if (rtype < 0) {
					rtype = 3;
				}
				if (rtype == 1) {
					if (!q.empty()) {
						while (!q.empty() && q.front() != 1) {
							q.pop_front();
							balls--;
						}
					}
				}
				if (rtype == 3) {
					if (!q.empty()) {
						while (!q.empty() && q.back() != 1) {
							q.pop_back();
							balls--;
						}
					}
				}
			}
			else if (orderback == 'r') {
				rtype++;
				if (rtype > 3) {
					rtype = 0;
				}
				if (rtype == 1) {
					if (!q.empty()) {
						while (!q.empty() && q.front() != 1) {
							q.pop_front();
							balls--;
						}
					}
				}
				if (rtype == 3) {
					if (!q.empty()) {
						while (!q.empty() && q.back() != 1) {
							q.pop_back();
							balls--;
						}
					}
				}
			}
		}
		else if (orders == "pop") {
			if (!q.empty()) {
				if (q.front() == 0) {
					balls--;
				}
				else if (q.front() == 1) {
					walls--;
				}
				q.pop_front();
				if (rtype == 1) {
					if (!q.empty()) {
						while (!q.empty() && q.front() != 1) {
							q.pop_front();
							balls--;
						}
					}
				}
			}
		}
		else if (orders == "push") {
			cin >> orderback;
			if (orderback == 'b') {
				if (rtype == 0 || rtype == 2) {
					q.push_back(0);
					balls++;
				}
				else if (rtype == 1) {
					if (walls > 0) {
						q.push_back(0);
						balls++;
					}
				}
			}
			else if (orderback == 'w') {
				q.push_back(1);
				walls++;
			}
		}
	}
}