#include <iostream>
#include <queue>
using namespace std;


int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char npt;
	deque<char> pal;
	npt = cin.get();
	while (npt != '\n') {
		pal.push_back(npt);
		npt = cin.get();
	}
	bool answer = true;
	while (!pal.empty()) {
		if (pal.size() > 1) {
			if (pal.front() != pal.back()) {
				answer = false;
			}
			pal.pop_front();
			pal.pop_back();
		}
		else {
			pal.pop_back();
		}
	}
	if (answer) {
		cout << "1";
	}
	else {
		cout << "0";
	}
}