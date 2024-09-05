#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x[5], y;
	bool ans = true;
	for (int i = 0; i < 5; i++)
		cin >> x[i];
	for (int i = 0; i < 5; i++) {
		cin >> y;
		if (x[i] + y != 1)
			ans = false;
	}
	ans ? cout << 'Y' : cout << 'N';
}