#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char n;
	queue<char> linez;
	n = cin.get();
	while (n != '\n') {
		linez.push(n);
		n = cin.get();
	}
	while (!linez.empty()) {
		for (int i = 0; i < 10; i++) {
			if (!linez.empty()) {
				cout << linez.front();
				linez.pop();
			}
		}
		cout << "\n";
	}
}