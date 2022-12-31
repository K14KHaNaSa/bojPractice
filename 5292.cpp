#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 15 == 0) {
			cout << "DeadMan\n";
		}
		else if (i % 5 == 0) {
			cout << "Man\n";
		}
		else if (i % 3 == 0) {
			cout << "Dead\n";
		}
		else {
			cout << i << " ";
		}
	}
}