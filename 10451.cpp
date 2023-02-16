#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, pi, cycles;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		vector<int> p(n);
		vector<bool> visit(n);
		for (int j = 0; j < n; j++) {
			cin >> pi;
			p[j] = pi - 1;
		}
		cycles = 0;
		for (int j = 0; j < n; j++) {
			bool visiting = false;
			if (!visit[j]) {
				int from = j;
				int to = p[j];
				while (!visiting) {
					if (visit[to]) {
						visiting = true;
					}
					else {
						from = to;
						to = p[from];
						visit[from] = true;
					}
				}
				cycles++;
			}
		}
		cout << cycles << "\n";
	}
}