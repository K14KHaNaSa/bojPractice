#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int aa, ah, ba, bh;
	cin >> aa >> ah >> ba >> bh;
	while (ah > 0 && bh > 0) {
		ah -= ba;
		bh -= aa;
	}
	if (ah <= 0 && bh <= 0)
		cout << "DRAW";
	else {
		cout << "PLAYER ";
		ah > 0 ? cout << 'A' : cout << 'B';
	}
}