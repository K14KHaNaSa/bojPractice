#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	if (n % 2 == 1) {
		cout << "Either";
	}
	else if (n % 4 == 0) {
		cout << "Even";
	}
	else {
		cout << "Odd";
	}
}