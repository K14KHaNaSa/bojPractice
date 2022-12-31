#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	if (n < 206) {
		cout << 1;
	}
	else if (n < 218) {
		cout << 2;
	}
	else if (n < 229) {
		cout << 3;
	}
	else {
		cout << 4;
	}
}