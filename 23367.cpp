#include <iostream>
using namespace std;

int lr(char c) {
	if (c == 'q')
		return 1;
	if (c == 'w')
		return 1;
	if (c == 'e')
		return 1;
	if (c == 'r')
		return 1;
	if (c == 't')
		return 1;
	if (c == 'a')
		return 1;
	if (c == 's')
		return 1;
	if (c == 'd')
		return 1;
	if (c == 'f')
		return 1;
	if (c == 'g')
		return 1;
	if (c == 'z')
		return 1;
	if (c == 'x')
		return 1;
	if (c == 'c')
		return 1;
	if (c == 'v')
		return 1;
	if (c == 'b')
		return 1;
	return 2;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c;
	int dk = 0; // reset0 / left1 / right2
	int now;
	bool d = true;
	c = cin.get();
	while (c != '\n') {
		now = lr(c);
		if (now == dk)
			d = false;
		else
			dk = now;
		c = cin.get();
	}
	d ? cout << "yes" : cout << "no";
}