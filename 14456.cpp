#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	int c[2] = { 0, 0 };
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (a != b)
			c[(a + 3 - b) % 3 - 1]++;
	}
	cout << max(c[0], c[1]);
}