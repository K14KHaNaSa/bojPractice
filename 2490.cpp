#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		int result = a + b + c + d;
		if (result == 4) {
			cout << "E\n";
		}
		else {
			cout << char(68 - result) << "\n";
		}
	}
}