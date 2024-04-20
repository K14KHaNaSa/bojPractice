#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int y;
	cin >> y;
	switch (y) {
	case 2006: cout << "PetrSU, ITMO"; break;
	case 1996:		
	case 1997:
	case 2000:
	case 2007:
	case 2008:
	case 2013:
	case 2018: cout << "SPbSU"; break;
	default: cout << "ITMO"; break;
	}
}