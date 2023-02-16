#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	bool tm = false;
	bool tr = false;
	bool mr = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if ((a == 1 && b == 3) || (a == 3 && b == 1)) {
			tm = true;
		}
		if ((a == 1 && b == 4) || (a == 4 && b == 1)) {
			tr = true;
		}
		if ((a == 3 && b == 4) || (a == 4 && b == 3)) {
			mr = true;
		}
	}
	if (n == 3 && tm && tr && mr) {
		cout << "Wa-pa-pa-pa-pa-pa-pow!";
	}
	else {
		cout << "Woof-meow-tweet-squeek";
	}
}