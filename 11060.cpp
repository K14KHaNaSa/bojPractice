#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<bool> visit(n);
	vector<int> a(n);
	vector<int> step(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	visit[0] = true;
	for (int j = 1; j <= a[0]; j++) {
		if (j < n) {
			visit[j] = true;
			step[j] = 1;
		}
	}
	for (int i = 1; i < n; i++) {
		if (step[i] != 0) {
			for (int j = 1; j <= a[i]; j++) {
				if (i + j < n) {
					if (!visit[i + j]) {
						visit[i + j] = true;
						step[i + j] = step[i] + 1;
					}
					else {
						step[i + j] = min(step[i + j], step[i] + 1);
					}
				}				
			}
		}
	}
	if (visit[n - 1]) {
		cout << step[n - 1];
	}
	else {
		cout << -1;
	}
}