#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, w, b;
	string m, ans;
	cin >> n;
	w = 0;
	while (n--) {
		cin >> m >> b;
		if (b > w) {
			w = b;
			ans = m;
		}
	}
	cout << ans;
}