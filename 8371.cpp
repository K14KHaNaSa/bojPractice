#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, i;
	char o[100000];
	char c;
	int ans = 0;
	cin >> n;
	c = cin.get(); // \n
	for (i = 0; i < n; i++)
		o[i] = cin.get();
	c = cin.get(); // \n
	for (i = 0; i < n; i++) {
		c = cin.get();
		if (o[i] != c)
			ans++;
	}
	cout << ans;
}