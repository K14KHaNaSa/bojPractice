#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int l, r, x;
	cin >> l >> r >> x;
	if (l | x > 0)
		cout << 0;
	else
		cout << (r | x) + 1;
}