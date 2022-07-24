#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	float a, b;
	cin >> a >> b;
	if (a < 100) {
		cout << 1;
		return 0;
	}
	else if ((a - (a * b / 100)) < 100) {
		cout << 1;
		return 0;
	}
	else
		cout << 0;
}