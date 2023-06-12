#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, l, x;
	cin >> n >> m >> l;
	int bw = 0;
	while (n--) {
		cin >> x;
		bw += x;
	}
	if (bw == m) {
		cout << "0";
	}
	else if ((bw > m) || (bw < l && bw + l > m)) {
		cout << "-1";
	}
	else {
		cout << "1";
	}
}