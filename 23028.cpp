#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	int n, a, b;
	int jg, bjg;
	cin >> n >> a >> b;
	for (int i = 0; i < (8 - n); i++) {
		cin >> jg >> bjg;
		a += jg * 3;
		if ((jg + bjg) / 6 > 0) {
			b += 6 * 3;
		}
		else {
			b += (jg + bjg) * 3;
		}
	}
	for (int i = (8 - n); i < 10; i++) {
		cin >> jg >> bjg;
	}
	if (a >= 66 && b >= 130) {
		cout << "Nice";
	}
	else {
		cout << "Nae ga wae";
	}
}