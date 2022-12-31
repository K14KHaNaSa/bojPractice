#include <iostream>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	stack<pair<int, int>> friends;
	bool between = false;
	int n, desk, profi, profj, sqi, sqj;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> desk;
			if (desk == 2) {
				if (between == false) {
					between = true;
				}
				else {
					between = false;
				}
				sqi = i;
				sqj = j;
			}
			else if (desk == 5) {
				if (between == false) {
					between = true;
				}
				else {
					between = false;
				}
				profi = i;
				profj = j;
			}
			else if (desk == 1) {
				if (between == true) {
					friends.push(make_pair(i, j));
				}
			}
		}
	}
	int left = min(profj, sqj);
	int right = max(profj, sqj);
	int up = min(profi, sqi);
	int down = max(profi, sqi);
	int help = 0;
	while (!friends.empty()) {
		int friendy = friends.top().first;
		int friendx = friends.top().second;
		if (friendx >= left && friendx <= right && friendy >= up && friendy <= down) {
			help++;
		}
		friends.pop();
	}
	if (help > 2 && sqrt(pow(right - left, 2) + pow(down - up, 2)) >= 5) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}