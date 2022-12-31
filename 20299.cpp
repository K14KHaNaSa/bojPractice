#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<int> vipclub;
	int a, b, c;
	int n, k, l;
	cin >> n >> k >> l;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a >= l && b >= l && c >= l && a + b + c >= k) {
			vipclub.push(a);
			vipclub.push(b);
			vipclub.push(c);
		}
	}
	cout << vipclub.size() / 3 << "\n";
	while (!vipclub.empty()) {
		cout << vipclub.front() << " ";
		vipclub.pop();
	}
}