#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		while (n > 4) {
			cout << "++++ ";
			n -= 5;
		}
		while (n--)
			cout << '|';
		cout << '\n';
	}
}