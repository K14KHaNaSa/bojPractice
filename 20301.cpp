#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, k, m, temp;
	deque<int> dq;
	int rotatecount = 0;
	cin >> n >> k >> m;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	while (dq.size() > 0) {
		for (int j = 0; j < k - 1; j++) {
			if ((rotatecount / m) % 2 == 0) {
				temp = dq.front();
				dq.push_back(temp);
				dq.pop_front();
			}
			else {
				temp = dq.back();
				dq.push_front(temp);
				dq.pop_back();
			}
		}
		if ((rotatecount / m) % 2 == 0) {
			temp = dq.front();
			rotatecount++;
			cout << temp << "\n";
			dq.pop_front();
		}
		else {
			temp = dq.back();
			rotatecount++;
			cout << temp << "\n";
			dq.pop_back();
		}
	}
}