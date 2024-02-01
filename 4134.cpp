#include <iostream>
#include <cmath>
using namespace std;

unsigned int t, n, i;

bool check_prime(unsigned int a) {
	bool check_result = true;
	for (i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			check_result = false;
			break;
		}
	}
	return check_result;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> t;
	while (t--) {
		cin >> n;
		if (n > 2) {
			while (n % 2 == 0)
				n++;
			while (!check_prime(n))
				n += 2;
		}
		else
			n = 2;
		cout << n << "\n";
	}
}