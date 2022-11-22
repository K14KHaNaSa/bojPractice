#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	priority_queue<int> pvalue;
	int n, a, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 0) {
			if (pvalue.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << pvalue.top() << "\n";
				pvalue.pop();
			}
		}
		else {
			for (int j = 0; j < a; j++) {
				cin >> v;
				pvalue.push(v);
			}
		}
	}
}