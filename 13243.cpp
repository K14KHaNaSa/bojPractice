#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, elem, prelem, anslen, anssum, nowlen, nowsum;
	anslen = 0;
	anssum = 0;
	nowlen = 0;
	nowsum = 0;
	prelem = 0;
	cin >> n;
	while (n--) {
		cin >> elem;
		if (elem >= prelem) {
			nowsum += elem;
			nowlen++;
		}
		else {
			nowlen = 1;
			nowsum = elem;
		}
		if (nowlen > anslen) {
			anslen = nowlen;
			anssum = nowsum;
		}
		prelem = elem;
	}
	cout << anslen << ' ' << anssum;
}