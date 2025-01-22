#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i, ans;
	int x[10001];
	cin >> n;
	int mt = 0;
	for (i = 1; i < 10001; i++)
		x[i] = 0;
	while (n--) {
		cin >> i;
		x[i]++;
		mt = max(mt, x[i]);
	}
	for (i = 10000; i > 0; i--) {
		if (x[i] == mt)
			ans = i;
	}
	cout << ans;
}