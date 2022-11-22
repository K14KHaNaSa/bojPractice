#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, v, ds, vstop;
	int buy = 0;
	priority_queue<int> vs;
	cin >> n >> ds;
	if (n != 1) {
		for (int i = 1; i < n; i++) {
			cin >> v;
			vs.push(v);
		}
		while (ds <= vs.top()) {
			vstop = vs.top();
			vs.pop();
			ds++;
			buy++;
			vs.push(vstop - 1);
		}
	}
	cout << buy;
}