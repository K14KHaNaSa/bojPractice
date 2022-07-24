#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, k, temp;
	queue<int> q;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << "<";
	if (n > 2) {
		while (q.size() > 2) {
			for (int j = 0; j < k - 1; j++) {
				temp = q.front();
				q.pop();
				q.push(temp);
			}
			temp = q.front();
			q.pop();
			cout << temp << ", ";
		}
		if (k % 2 == 1) {
			cout << q.front() << ", ";
			q.pop();
			cout << q.front() << ">";
		}
		else {
			cout << q.back() << ", " << q.front() << ">";
		}

	}
	else if (n == 2) {
		if (k == 2) {
			cout << "2, 1>";
		}
		else {
			cout << "1, 2>";
		}
	}
	else if (n == 1) {
		cout << "1>";
	}
}