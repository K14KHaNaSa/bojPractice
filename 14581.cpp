#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	char hj;
	queue<char> id;
	hj = cin.get();
	while (hj != '\n') {
		id.push(hj);
		hj = cin.get();
	}
	for (int i = 0; i < 3; i++) {
		if (i != 1) {
			for (int j = 0; j < 3; j++) {
				cout << ":fan:";
			}
			cout << "\n";
		}
		else {
			cout << ":fan::";
			while (!id.empty()) {
				cout << id.front();
				id.pop();
			}
			cout << "::fan:\n";
		}
	}
}