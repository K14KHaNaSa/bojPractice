#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;
	vector<int> floor(f + 1, 2000001);
	queue<int> pushbutton;
	pushbutton.push(s);
	floor[s] = 0;
	while (!pushbutton.empty()) {
		int nowfloor = pushbutton.front();
		pushbutton.pop();
		if (nowfloor + u <= f) {
			if (floor[nowfloor + u] > floor[nowfloor] + 1) {
				floor[nowfloor + u] = floor[nowfloor] + 1;
				pushbutton.push(nowfloor + u);
			}
		}
		if (nowfloor - d > 0) {
			if (floor[nowfloor - d] > floor[nowfloor] + 1) {
				floor[nowfloor - d] = floor[nowfloor] + 1;
				pushbutton.push(nowfloor - d);
			}
		}
		if (floor[g] < 2000001) {
			while (!pushbutton.empty()) {
				pushbutton.pop();
			}
		}
	}
	if (floor[g] < 2000001) {
		cout << floor[g];
	}
	else {
		cout << "use the stairs";
	}
}