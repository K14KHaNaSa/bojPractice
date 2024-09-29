#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, temp;
	cin >> n >> a >> b;
	int good = 1;
	int uuu = 1;
	while (n--) {
		good += a;
		uuu += b;
		if (good < uuu) {
			temp = good;
			good = uuu;
			uuu = temp;
		}
		if (good == uuu)
			uuu--;
	}
	cout << good << ' ' << uuu;
}