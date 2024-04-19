#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, p1, p2;
	char l, r;
	cin >> t;
	while (t--) {
		cin >> n;
		p1 = 0;
		p2 = 0;
		while (n--) {
			cin >> l >> r;
			if (l == 'R' && r == 'S')
				p1++;
			if (l == 'S' && r == 'P')
				p1++;
			if (l == 'P' && r == 'R')
				p1++;
			if (l == 'R' && r == 'P')
				p2++;
			if (l == 'S' && r == 'R')
				p2++;
			if (l == 'P' && r == 'S')
				p2++;
		}
		if (p1 == p2)
			cout << "TIE\n";
		else
			p1 > p2 ? cout << "Player 1\n" : cout << "Player 2\n";
	}
}