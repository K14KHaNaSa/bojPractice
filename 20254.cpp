#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int ur, tr, uo, to;
	cin >> ur >> tr >> uo >> to;
	cout << 56 * ur + tr * 24 + 14 * uo + 6 * to;
}