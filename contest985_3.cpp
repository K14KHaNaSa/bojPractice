#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, lv;
	cin >> n;
	priority_queue<int> ch;
	while (n--) {
		cin >> lv;
		ch.push(lv);
	}
	int up = 0;
	int lvsum = 0;
	int unch = 0;
	while (unch < 42 && !ch.empty()) {
		int c = ch.top();
		if (c >= 250) {
			up += 5;
		}
		else if (c >= 200) {
			up += 4;
		}
		else if (c >= 140) {
			up += 3;
		}
		else if (c >= 100) {
			up += 2;
		}
		else if(c>=60){
			up++;
		}
		lvsum += c;
		unch++;
		ch.pop();
	}
	cout << lvsum << " " << up;
}