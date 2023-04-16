#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	unsigned long int a, b, c;
	while (t--) {
		cin >> a >> b >> c;
		cout << min(min((a + b) * (a + b) + c * c, (a + c) * (a + c) + b * b), (b + c) * (b + c) + a * a) << "\n";
	}
}