#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, v;
	int tmp = 0;
	cin >> n >> k;
	queue<int> temp;
	for (int i = 1; i <= k; i++) {
		cin >> v;
		tmp += v;
		temp.push(v);
	}
	int mx = tmp;
	int temptop;
	for (int i = k + 1; i <= n; i++) {
		cin >> v;
		temptop = temp.front();
		tmp = v + tmp - temptop;
		if (tmp > mx) {
			mx = tmp;
		}
		temp.pop();
		temp.push(v);
	}
	cout << mx;
}