#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);

	int chk, coke, beer, abletoeat;
	cin >> chk;
	cin >> coke >> beer;

	abletoeat = coke / 2 + beer;
	if (abletoeat > chk)
		cout << chk;
	else
		cout << abletoeat;
}