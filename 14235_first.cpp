#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	queue<int> pvalue;
	int n, a, v, pv;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 0) {
			if (pvalue.empty()) {
				cout << -1 << "\n";
			}
			else {
				pv = 0;
				for (int j = 0; j < pvalue.size(); j++) {
					if (pv < pvalue.front()) {
						pv = pvalue.front();
					}
					pvalue.push(pvalue.front());
					pvalue.pop();
				}
				cout << pv << "\n";
				for (int j = 0; j < pvalue.size(); j++) {
					if (pv == pvalue.front()) {
						pvalue.pop();
						break;
					}
					pvalue.push(pvalue.front());
					pvalue.pop();
				}
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