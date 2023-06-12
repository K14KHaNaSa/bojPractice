#include <iostream>
using namespace std;

long int powering(int p) {
	long int r;
	if (p == 1) {
		r = 31;
	}
	else if (p % 2 == 0) {
		r = powering(p / 2) * powering(p / 2);
	}
	else {
		r = ((powering(p / 2) * powering(p / 2)) % 1234567891) * 31;
	}
	return (r % 1234567891);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char l; // a = 97
	cin >> n;
	l = cin.get();
	l = cin.get();
	long int answer = int(l) - 96;
	for (int i = 1; i < n; i++) {
		l = cin.get();
		answer = (answer + (((int(l) - 96) * powering(i)) % 1234567891)) % 1234567891;
	}
	cout << answer % 1234567891;
}