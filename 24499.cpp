#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int k, n, a, yummy;
	queue<int> q;
	queue<int> frontcheck;
	cin >> n >> k;
	cin >> yummy;
	q.push(yummy);
	frontcheck.push(yummy);
	for (int i = 1; i < k; i++) {
		cin >> a;
		yummy += a;
		frontcheck.push(a);
		q.push(a);
	}
	int delicious = yummy;
	for (int i = k; i < n; i++) {
		cin >> a;
		yummy = yummy + a - q.front();
		if (yummy > delicious) {
			delicious = yummy;
		}
		q.push(a);
		q.pop();
	}
	for (int i = 0; i < k; i++) {
		yummy = yummy + frontcheck.front() - q.front();
		if (yummy > delicious) {
			delicious = yummy;
		}
		frontcheck.pop();
		q.pop();
	}
	cout << delicious;
}