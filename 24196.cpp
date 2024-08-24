#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c;
	int nxt = 0;
	c = cin.get();
	while (c != '\n') {
		if (nxt == 0) {
			cout << c;
			nxt = int(c - 'A' + 1);
		}
		nxt--;
		c = cin.get();
	}
}