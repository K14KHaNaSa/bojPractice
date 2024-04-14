#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int i = 8, n;
	bool ok = true;
	while (i--) {
		cin >> n;
		if (n == 9)
			ok = false;
	}
	ok ? cout << "S" : cout << "F";
}