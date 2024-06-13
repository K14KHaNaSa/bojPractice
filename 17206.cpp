#include <iostream>
using namespace std;

int s[80001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, i;
	s[0] = 0;
	for (i = 1; i <= 80000; i++) {
		s[i] = s[i - 1];
		if (i % 3 == 0)
			s[i] += i;
		else if (i % 7 == 0)
			s[i] += i;
	}
	cin >> t;
	while (t--) {
		cin >> n;
		cout << s[n] << '\n';
	}
}