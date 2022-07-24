#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, temp;
	queue<int> q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	while (q.size() > 1) {
		cout << q.front() << " ";
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);
	}
	cout << q.front();
}