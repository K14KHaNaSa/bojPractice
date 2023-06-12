#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a;
	priority_queue<int> sq;
	for (int i = 0; i < 4; i++) {
		cin >> a;
		sq.push(a);
	}
	sq.pop();
	int la = sq.top();
	sq.pop();
	sq.pop();
	cout << la * sq.top();
}