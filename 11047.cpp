#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	stack<int> stk;
	int n, stkc, k, coin;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> stkc;
		stk.push(stkc);
	}
	coin = 0;
	while (k > 0) {
		stkc = stk.top();
		if (k / stkc) {
			coin += k / stkc;
			k = k % stkc;
		}
		stk.pop();
	}
	cout << coin;
}