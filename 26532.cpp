#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, ans;
	cin >> a >> b;
	ans = a * b / 24200;
	a* b % 24000 == 0 ? cout << ans : cout << ans + 1;
}