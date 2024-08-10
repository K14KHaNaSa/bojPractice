#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c;
	int n = 1;
	int qs = 0;
	c = cin.get();
	while (c != '#') {
		if (c == '\n') {
			cout << qs << '\n';
			qs = 0;
			n = 0;
		}
		else if (c >= 'A' && c <= 'Z')
			qs += int(c - 'A' + 1) * n;
		n++;
		c = cin.get();
	}
}