#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<char> oneline;
	char npt;
	npt = cin.get();
	while (!cin.eof()) {
		if (npt == '\n') {
			while (!oneline.empty()) {
				cout << oneline.front();
				oneline.pop();
			}
			cout << "\n";
		}
		else {
			oneline.push(npt);
		}
		npt = cin.get();
	}
}