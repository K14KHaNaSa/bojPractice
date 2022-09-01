#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x, n, v;
	int visit = 0;
	cin >> x >> n;
	queue<int> temp;
	for (int i = 1; i <= n; i++) {
		cin >> v;
		visit += v;
		temp.push(v);
	}
	int mx = visit;
	int mxcount = 1;
	int temptop;
	for (int i = n + 1; i <= x; i++) {
		cin >> v;
		temptop = temp.front();
		visit = v + visit - temptop;
		if (visit > mx) {
			mx = visit;
			mxcount = 1;
		}
		else if (visit == mx) {
			mxcount++;
		}
		temp.pop();
		temp.push(v);
	}
	if (mx == 0) {
		cout << "SAD";
	}
	else {
		cout << mx << "\n" << mxcount;
	}
}