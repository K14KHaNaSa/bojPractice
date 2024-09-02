#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool remain = true;
	int q, x, y;
	cin >> q;
	int ps = 0;
	while (q--) {
		cin >> x >> y;
		if (x == 1)
			ps += y;
		if (x == 2) {
			if (ps < y)
				remain = false;
			else
				ps -= y;
		}
	}
	remain ? cout << "See you next month" : cout << "Adios";
}