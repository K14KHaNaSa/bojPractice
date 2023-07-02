#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, l, r;
	cin >> n >> x;
	cin >> l >> r;
	int answer = l + r;
	n -= 2;
	while (n--) {
		l = r;
		cin >> r;
		answer = min(answer, l + r);
	}
	cout << answer * x;
}