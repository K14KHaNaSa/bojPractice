#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m;
	priority_queue<int> f;
	for (int i = 0; i < 4; i++) {
		cin >> m;
		f.push(m);
	}
	int ans = 1;
	for (int i = 0; i < 3; i++) {
		ans += f.top();
		f.pop();
	}
	cout << ans;
}