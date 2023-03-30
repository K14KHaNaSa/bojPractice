#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, h, w, n, roomno;
	cin >> t;
	while (t--) {
		cin >> h >> w >> n;
		if (n % h != 0) {
			roomno = n / h + 1 + (n % h) * 100;
		}
		else {
			roomno = h * 100 + n / h;
		}
		cout << roomno << "\n";
	}
}