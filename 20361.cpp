#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int n, x, k;
	cin >> n >> x >> k;
	int l, r;
	int now = x;
	for (int i = 0; i < k; i++){
		cin >> l >> r;
		if (now == l) {
			now = r;
		}
		else if (now == r) {
			now = l;
		}
	}
	cout << now;
}