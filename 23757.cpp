#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, ea;
	priority_queue<int> box;
	cin >> n >> m;
	int child[100000];
	for (int i = 0; i < n; i++) {
		cin >> ea;
		box.push(ea);
	}
	for (int i = 0; i < m; i++) {
		cin >> ea;
		child[i] = ea;
	}
	bool able = true;
	for (int i = 0; i < m; i++) {
		if (child[i] < box.top()) {
			box.push(box.top() - child[i]);
			box.pop();
		}
		else if (child[i] == box.top()) {
			box.pop();
		}
		else {
			able = false;
			break;
		}
	}
	if (able) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}