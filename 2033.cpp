#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int d = 0;
	cin >> n;
	while (n > 10) {
		if (n % 10 > 4)
			n += 10;
		n /= 10;
		d++;
	}
	cout << n;
	while (d--)
		cout << 0;
}