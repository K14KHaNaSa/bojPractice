#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, book;
	cin >> n >> m;
	priority_queue<int> plus;
	priority_queue<int> minus;
	int plusmax = 0;
	int minusmax = 0;
	for (int i = 0; i < n; i++) {
		cin >> book;
		if (book > 0) {
			plus.push(book);
			plusmax = max(plusmax, book);
		}
		else {
			minus.push(book * -1);
			minusmax = max(minusmax, book * -1);
		}
	}
	int moving = 0;
	if (plusmax > minusmax) {
		moving += plus.top();
		for (int i = 0; i < m; i++) {
			if (!plus.empty()) {
				plus.pop();
			}
		}
	}
	else {
		moving += minus.top();
		for (int i = 0; i < m; i++) {
			if (!minus.empty()) {
				minus.pop();
			}
		}
	}
	while (!plus.empty()) {
		moving += plus.top() * 2;
		for (int i = 0; i < m; i++) {
			if (!plus.empty()) {
				plus.pop();
			}
		}
	}
	while (!minus.empty()) {
		moving += minus.top() * 2;
		for (int i = 0; i < m; i++) {
			if (!minus.empty()) {
				minus.pop();
			}
		}
	}
	cout << moving;
}