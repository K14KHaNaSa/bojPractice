#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, d, i;
	int c[10];
	bool good;
	cin >> n;
	while (n--) {
		cin >> d;
		good = true;
		cout << "Denominations:";
		for (i = 0; i < d; i++) {
			cin >> c[i];
			cout << ' ' << c[i];
		}
		cout << '\n';
		for (i = 1; i < d; i++) {
			if (c[i] / c[i - 1] < 2)
				good = false;
		}
		good ? cout << "Good" : cout << "Bad";
		cout << " coin denominations!\n\n";
	}
}