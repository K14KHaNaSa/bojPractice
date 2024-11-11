#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	long long int a, s, r;
	a = 0;
	s = 0;
	cin >> n;
	while (n--) {
		cin >> r;
		r > 0 ? a += 1 : a -= 1;
		s += a;
	}
	cout << s;
}