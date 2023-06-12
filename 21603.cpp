#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	int ban1 = k % 10;
	int ban2 = (k * 2) % 10;
	queue<int> call;
	for (int i = 1; i <= n; i++) {
		if (i % 10 != ban1 && i % 10 != ban2) {
			call.push(i);
		}
	}
	cout << call.size();;
	if (call.size() > 0) {
		cout << "\n";
		while (!call.empty()) {
			cout << call.front() << " ";
			call.pop();
		}
	}
}