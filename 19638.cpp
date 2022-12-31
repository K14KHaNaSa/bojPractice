#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, h, t, hg;
	bool notbig = false;
	priority_queue<int> goliath;
	cin >> n >> h >> t;
	int firstt = t;
	for (int i = 0; i < n; i++) {
		cin >> hg;
		goliath.push(hg);
	}
	if (goliath.top() < h) {
		notbig = true;
	}
	else {
		while (t > 0) {
			if (goliath.top() > 2) {
				goliath.push(goliath.top() / 2);
				goliath.pop();
			}
			else {
				goliath.push(1);
			}
			t--;
			if (goliath.top() < h && !notbig) {
				notbig = true;
				break;
			}
		}
	}
	if (notbig) {
		cout << "YES\n" << firstt - t;
	}
	else {
		cout << "NO\n" << goliath.top();
	}
}