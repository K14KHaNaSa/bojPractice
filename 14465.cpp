#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, b, er;
	cin >> n >> k >> b;
	queue<int> error1;
	queue<int> error2;
	vector<int> err(b);
	for (int i = 0; i < b; i++) {
		cin >> er;
		err[i] = er;
	}
	sort(err.begin(), err.end());
	for (int i = 0; i < b; i++) {
		error1.push(err[i]);
	}
	int count = 0;
	for (int i = 1; i <= k; i++) {
		if (i == error1.front()) {
			error2.push(error1.front());
			error1.pop();
			count++;
		}
	}
	int mincount = count;
	for (int i = k + 1; i <= n; i++) {
		if (i == error1.front()) {
			error2.push(error1.front());
			error1.pop();
			count++;
		}
		if (i - k == error2.front()) {
			error2.pop();
			count--;
		}
		mincount = min(mincount, count);
	}
	cout << mincount;
}