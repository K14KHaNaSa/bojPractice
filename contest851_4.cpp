#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char st;
	int s = 0;
	int t = 0;
	queue<char> stst;
	cin >> n;
	st = cin.get();
	for (int i = 0; i < n; i++) {
		st = cin.get();
		stst.push(st);
		if (st == 's') {
			s++;
		}
		else {
			t++;
		}
	}
	while (!stst.empty()) {
		if (s == t) {
			while (!stst.empty()) {
				cout << stst.front() << "";
				stst.pop();
			}
		}
		else {
			if (stst.front() == 's') {
				s--;
			}
			else {
				t--;
			}
			stst.pop();
		}
	}
}