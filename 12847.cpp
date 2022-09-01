#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, v;
	cin >> n >> m;
	queue<unsigned int> past;
	unsigned long int money = 0;
	for (int i = 1; i <= m; i++) {
		cin >> v;
		money += v;
		past.push(v);
	}
	unsigned int temptop;
	unsigned long int mx = money;
	for (int i = m + 1; i <= n; i++) {
		cin >> v;
		temptop = past.front();
		money = v + money - temptop;
		if (money > mx) {
			mx = money;
		}
		past.pop();
		past.push(v);
	}
	cout << mx;
}