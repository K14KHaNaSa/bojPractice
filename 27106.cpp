#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p;
	cin >> p;
	p = 100 - p;
	cout << p / 25 << " ";
	p %= 25;
	cout << p / 10 << " ";
	p %= 10;
	cout << p / 5 << " ";
	p %= 5;
	cout << p;
}