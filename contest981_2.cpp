#include <iostream>
#include <algorithm>
using namespace std;

int p[500001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, p + n);
	int oddans = 2000000005;
	int evenans = 2000000006;
	int evf, evb, odf, odb;
	evf = 1000000002;
	odf = 1000000001;
	if (p[0] % 2 == 0) {
		evb = p[0];
		odb = -1000000001;
	}
	else {
		odb = p[0];
		evb = -1000000002;
	}
	for (int i = 1; i < n; i++) {
		if (p[i] % 2 == 0) {
			evf = p[i];
			if (evb > -1000000002) {
				evenans = min(evenans, evf - evb);
			}
			if (odb > -1000000001) {
				oddans = min(oddans, evf - odb);
			}
			evb = evf;
		}
		else {
			odf = p[i];
			if (odb > -1000000001) {
				evenans = min(evenans, odf - odb);
			}
			if (evb > -1000000002) {
				oddans = min(oddans, odf - evb);
			}
			odb = odf;
		}
	}
	if (evenans > 2000000001) {
		evenans = -1;
	}
	if (oddans > 2000000000) {
		oddans = -1;
	}
	cout << evenans << " " << oddans;
}