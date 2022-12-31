#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s;
	int chicken = 0;
	cin >> n;
	s = cin.get();
	for (int i = 0; i < n; i++) {
		s = cin.get();
		if (s == 'C') {
			chicken++;
		}
	}
	cout << n / (n - chicken + 1);
}