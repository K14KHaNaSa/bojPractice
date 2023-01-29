#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<char> AB;
	char px;
	int xleng = 0;
	bool able = true;
	px = cin.get();
	while (px != '\n') {
		if (px == 'X') {
			xleng++;
		}
		else if (px == '.') {
			if (xleng % 2 != 0) {
				able = false;
			}
			else {
				for (int i = 0; i < (xleng / 4) * 4; i++) {
					AB.push('A');
				}
				for (int i = 0; i < xleng % 4; i++) {
					AB.push('B');
				}
				xleng = 0;
				AB.push('.');
			}
		}
		px = cin.get();
	}
	if (xleng != 0) {
		if (xleng % 2 != 0) {
			able = false;
		}
		else {
			for (int i = 0; i < (xleng / 4) * 4; i++) {
				AB.push('A');
			}
			for (int i = 0; i < xleng % 4; i++) {
				AB.push('B');
			}
			xleng = 0;
		}
	}
	if (able) {
		while (!AB.empty()) {
			cout << AB.front();
			AB.pop();
		}
	}
	else {
		cout << -1;
	}
}