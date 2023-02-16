#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	queue<char> word;
	char c;
	c = cin.get();
	while (c != '\n') {
		if (c != 'A' && c != 'B' && c != 'C' && c != 'D' && c != 'E' && c != 'G' && c != 'I' && c != 'M' && c != 'R') {
			word.push(c);
		}
		c = cin.get();
	}
	while (!word.empty()) {
		cout << word.front();
		word.pop();
	}
}