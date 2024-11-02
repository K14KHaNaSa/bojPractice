#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char c;
	int n, k;
	cin >> n >> k;
	c = cin.get(); // \n
	for (int i = 1; i <= n; i++) {
		c = cin.get();
		if (i >= k)
			(c >= 'A' && c <= 'Z') ? cout << char(c - 'A' + 'a') : cout << char(c - 'a' + 'A');
		else
			cout << c;
	}
}