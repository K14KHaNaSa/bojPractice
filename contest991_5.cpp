#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	deque<int> sw;
	for (int i = 1; i <= n; i++) {
		sw.push_back(i);
	}
	while (!sw.empty()) {
		cout << sw.back() << " ";
		sw.pop_back();
		if (!sw.empty()) {
			cout << sw.front() << " ";
			sw.pop_front();
		}
	}
}