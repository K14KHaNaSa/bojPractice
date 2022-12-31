#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	bool notable = false;
	cin >> n;
	vector<int> crain(n);
	for (int i = 0; i < n; i++) {
		cin >> crain[i];
	}
	cin >> m;
	vector<int> boxz(m);
	for (int i = 0; i < m; i++) {
		cin >> boxz[i];
	}
	sort(crain.rbegin(), crain.rend());
	sort(boxz.rbegin(), boxz.rend());
	int time = 0;
	if (crain[0] < boxz[0]) {
		cout << -1;
	}
	else {
		while (boxz.size() > 0) {
			for (int i = 0; i < n; i++) {
				if (boxz.size() > 0) {
					for (int j = 0; j < boxz.size(); j++) {
						if (crain[i] >= boxz[j]) {
							boxz.erase(boxz.begin() + j);
							break;
						}
					}
				}
			}
			time++;
		}
		cout << time;
	}
}