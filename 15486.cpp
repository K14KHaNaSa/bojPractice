#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> day(1500001);

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, t, p;
	cin >> n;
	cin >> t >> p; //i = 0
	day[t] = p;
	for (int i = 1; i < n; i++) {
		cin >> t >> p;
		day[i] = max(day[i], day[i - 1]);
		if (i + t <= n) {
			day[i + t] = max(day[i + t], max(day[i - 1], day[i]) + p);
		}
	}
	day[n] = max(day[n], day[n - 1]);
	cout << day[n];
}