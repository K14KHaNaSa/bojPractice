#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char st;
	int magic = 0;
	deque<char> stst;
	cin >> n;
	st = cin.get();
	for (int i = 0; i < n; i++) {
		st = cin.get();
		stst.push_back(st);
	}
	while (!stst.empty() || stst.size() > 1) {
		if (stst.size() == 1) {
			break;
		}
		if (stst.front() != stst.back()) {
			magic++;
		}
		stst.pop_back();
		stst.pop_front();
	}
	cout << magic;
}