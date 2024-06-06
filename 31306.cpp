#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char s;
	int v = 0;
	int y = 0;
	s = cin.get();
	while (s != '\n') {
		if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
			v++;
		if (s == 'y')
			y++;
		s = cin.get();
	}
	cout << v << " " << v + y;
}