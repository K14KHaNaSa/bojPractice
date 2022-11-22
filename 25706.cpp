#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, h;
	int blockheight;
	stack<int> height;
	cin >> n;
	vector<int> step(200001);
	for (int i = 0; i < n; i++) {
		cin >> h;
		height.push(h);
	}
	for (int i = n; i > 0; i--) {
		blockheight = height.top();
		if (blockheight + i <= n + 1) {
			step[i] = step[i + blockheight + 1] + 1;
		}
		else {
			step[i] = 1;
		}
		height.pop();
	}
	for (int i = 1; i <= n; i++) {
		cout << step[i] << " ";
	}
}