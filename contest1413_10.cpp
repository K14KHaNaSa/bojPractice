#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int p3, p4, p0;
	cin >> p3 >> p4 >> p0;
	int t3 = p3 / 3;
	p3 %= 3;
	int t4 = p4 / 4;
	p4 %= 4;
	for (int i = p0; i >= 0; i--) {
		int d3 = p0 - i;
		// d4 = i;
		if ((d3 + p3) % 3 == 0 && (i + p4) % 4 == 0) {
			cout << t3 + (d3 + p3) / 3 << ' ' << t4 + (i + p4) / 4;
			return 0;
		}
	}
	cout << -1;
}