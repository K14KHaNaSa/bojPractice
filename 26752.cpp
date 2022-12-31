#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int hh, mm, ss;
	cin >> hh >> mm >> ss;
	if (ss + 1 == 60) {
		ss = 0;
		mm++;
		if (mm == 60) {
			mm = 0;
			hh++;
			if (hh == 24) {
				hh = 0;
			}
		}
	}
	else {
		ss++;
	}
	cout << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << ":" << setw(2) << setfill('0') << ss;
}