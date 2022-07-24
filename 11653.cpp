#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	unsigned long int n, i;
	cin >> n;
	i = 2;
	while (n > 1) {
		if ((n % i) == 0) {
			cout << i << "\n";
			n /= i;
		}
		else {
			i++;
		}
	}
}