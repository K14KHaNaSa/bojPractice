#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a = 0;
	int b = 0;
	int s, i;
	for (i = 3; i > 0; i--) {
		cin >> s;
		a += s * i;
	}
	for (i = 3; i > 0; i--) {
		cin >> s;
		b += s * i;
	}
	if (a > b)
		cout << "A";
	if (a < b)
		cout << "B";
	if (a == b)
		cout << "T";
}