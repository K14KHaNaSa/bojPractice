#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool ssg[10001] = { false };
	for (int n = 1; n <= 10000; n++) {
		int dn = (n / 1000) + (n % 1000) / 100 + (n % 1000 % 100) / 10 + (n % 1000 % 100) % 10 + n;
		if (dn <= 10000) {
			ssg[dn] = true;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (ssg[i] == false) {
			cout << i << "\n";
		}
	}
}