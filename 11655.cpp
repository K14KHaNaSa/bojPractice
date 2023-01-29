#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ch;
	queue<int> line;
	ch = cin.get();
	while (ch != 10) {
		if (ch > 64 && ch < 78) {
			line.push(ch + 13);
		}
		else if (ch > 77 && ch < 91) {
			line.push(ch - 13);
		}
		else if (ch > 96 && ch < 110) {
			line.push(ch + 13);
		}
		else if (ch > 109 && ch < 123) {
			line.push(ch - 13);
		}
		else {
			line.push(ch);
		}
		ch = cin.get();
	}
	while (!line.empty()) {
		char out = char(line.front());
		cout << out;
		line.pop();
	}
}