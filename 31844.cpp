#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int r, b, d;
	char w;
	int i = 0;
	w = cin.get();
	while (w != '\n') {
		if (w == '@')
			r = i;
		if (w == '#')
			b = i;
		if (w == '!')
			d = i;
		i++;
		w = cin.get();
		if (w == EOF)
			break;
	}
	if (r < b && b < d)
		cout << d - r - 1;
	else if (d < b && b < r)
		cout << r - d - 1;
	else
		cout << -1;
}