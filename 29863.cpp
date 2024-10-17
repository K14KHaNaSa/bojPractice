#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int s, a;
	cin >> s >> a;
	s > 10 ? cout << (a + 24 - s) : cout << a - s;
}