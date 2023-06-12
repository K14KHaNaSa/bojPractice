#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	cin >> n;
	int h = (n - 1) * 8;
	while (n--) {
		cin >> t;
		h += t;
	}
	cout << h / 24 << " " << h % 24;
}