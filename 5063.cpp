#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, r, e, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> r >> e >> c;
		if (r < (e - c)) {
			cout << "advertise\n";
		}
		else if (r == (e - c)) {
			cout << "does not matter\n";
		}
		else if (r > (e - c)) {
			cout << "do not advertise\n";
		}
	}
}