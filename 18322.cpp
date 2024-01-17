#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	string e;
	queue<string> w;
	queue<int> w_len;
	cin >> n >> k;
	while (n--) {
		cin >> e;
		w.push(e);
		w_len.push(e.length());
	}
	cout << w.front();
	int l = w_len.front();
	w.pop();
	w_len.pop();
	while (!w.empty()) {
		if (l + w_len.front() <= k) {
			cout << " " << w.front();
			l += w_len.front();
		}
		else {
			cout << "\n" << w.front();
			l = w_len.front();
		}
		w.pop();
		w_len.pop();
	}
}