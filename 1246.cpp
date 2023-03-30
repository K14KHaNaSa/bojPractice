#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> p(m);
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	sort(p.begin(), p.end());
	int answer = 0;
	int price;
	for (int i = 0; i < m; i++) {
		if (answer < p[i] * min(n, (m - i))) {
			price = p[i];
			answer = p[i] * min(n, (m - i));
		}
	}
	cout << price << " " << answer;
}