#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, k;
	cin >> a >> b >> c >> k;
	vector<int> front(1000001, 1000001);
	vector<int> back(1000001, 1000001);
	vector<int> left(1000001, 1000001);
	vector<int> right(1000001, 1000001);
	left[a] = 1;
	right[b] = 1;
	back[c] = 1;
	int answer = 1000001;
	for (int j = min(a, min(b, c)); j <= k - min(a, min(b, c)); j++) {
		if (j + a <= k) {
			if (front[j] != 1000001) {
				left[j + a] = min(left[j + a], front[j] + 1);
			}
			if (right[j] != 1000001) {
				front[j + a] = min(front[j + a], right[j] + 1);
			}
			if (back[j] != 1000001) {
				right[j + a] = min(right[j + a], back[j] + 1);
			}
			if (left[j] != 1000001) {
				back[j + a] = min(back[j + a], left[j] + 1);
			}
		}
		if (j + b <= k) {
			if (front[j] != 1000001) {
				right[j + b] = min(right[j + b], front[j] + 1);
			}
			if (right[j] != 1000001) {
				back[j + b] = min(back[j + b], right[j] + 1);
			}
			if (back[j] != 1000001) {
				left[j + b] = min(left[j + b], back[j] + 1);
			}
			if (left[j] != 1000001) {
				front[j + b] = min(front[j + b], left[j] + 1);
			}
		}
		if (j + c <= k) {
			if (front[j] != 1000001) {
				back[j + c] = min(back[j + c], front[j] + 1);
			}
			if (right[j] != 1000001) {
				left[j + c] = min(left[j + c], right[j] + 1);
			}
			if (back[j] != 1000001) {
				front[j + c] = min(front[j + c], back[j] + 1);
			}
			if (left[j] != 1000001) {
				right[j + c] = min(right[j + c], left[j] + 1);
			}
		}
	}
	if (front[k] > 1000000) {
		cout << -1;
	}
	else {
		cout << front[k];
	}
}