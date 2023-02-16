#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, bbest, b;
	string abest, a;
	cin >> n >> abest >> bbest;
	for (int i = 1; i < n; i++) {
		cin >> a >> b;
		if (b > bbest) {
			abest = a;
			bbest = b;
		}
		else if (b == bbest) {
			if (abest > a) {
				abest = a;
				bbest = b;
			}
		}
	}
	cout << abest;
}