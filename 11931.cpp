#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	vector<int> q;
	cin >> n;
	while (n--) {
		cin >> a;
		q.push_back(a);
	}
	sort(q.begin(), q.end());
	while (!q.empty()) {
		cout << q.back() << '\n';
		q.pop_back();
	}
}