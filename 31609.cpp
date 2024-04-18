#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	bool a[10] = { false, };
	int n, i;
	cin >> n;
	while (n--) {
		cin >> i;
		a[i] = true;
	}
	for (i = 0; i < 10; i++) {
		if (a[i])
			cout << i << "\n";
	}
}