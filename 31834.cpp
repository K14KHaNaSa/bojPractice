#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, s, e;
	cin >> t;
	while (t--) {
		cin >> n >> s >> e;
		if ((s == n || s == 1) && (e == n || e == 1))
			cout << "0\n";
		else if (s == 1 || s == n || s + 1 == e || e + 1 == s)
			cout << "1\n";
		else
			cout << "2\n";
	}
}