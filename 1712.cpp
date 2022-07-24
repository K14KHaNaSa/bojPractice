#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	unsigned long int a, b, c;
	unsigned long int n = 0;
	cin >> a >> b >> c;
	if (c > b) {
		/*while ((a + b * n) >= (c * n)) {
			n++;
		}
		cout << n;*/
		cout << a / (c - b) + 1;
	}
	else
		cout << -1;
}