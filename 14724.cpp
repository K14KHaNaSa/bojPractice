#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string clubname[9] = { "PROBRAIN", "GROW", "ARGOS",
		"ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY" };
	int n, p;
	cin >> n;
	int ansp = 0;
	int ansc = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < n; j++) {
			cin >> p;
			if (p > ansp) {
				ansp = p;
				ansc = i;
			}
		}
	}
	cout << clubname[ansc];
}