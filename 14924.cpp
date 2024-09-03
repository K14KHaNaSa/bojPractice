#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int s, t, d;
	cin >> s >> t >> d;
	cout << (d * t) / (s * 2);
}