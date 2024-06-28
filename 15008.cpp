#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, ai;
	priority_queue<int> a;
	int alice = 0;
	int bob = 0;
	cin >> n;
	while (n--) {
		cin >> ai;
		a.push(ai);
	}
	bool turn = false; // false = alice / true = bob
	while (!a.empty()) {
		if (!turn) {
			alice += a.top();
			turn = true;
		}
		else {
			bob += a.top();
			turn = false;
		}
		a.pop();
	}
	cout << alice << " " << bob;
}