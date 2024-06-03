#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, h;
	char t;
	cin >> n;
	t = cin.get();
	while (n--) {
		h = 0;
		t = cin.get();
		while (t != '\n') {
			if (t == 'A' || t == 'D' || t == 'O' || t == 'P' || t == 'Q' || t == 'R')
				h++;
			if (t == 'B')
				h += 2;
			t = cin.get();
		}
		cout << h << '\n';
	}
}