#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	if (m < 3) {
		cout << "NEWBIE!";
	}
	else if (m <= n) {
		cout << "OLDBIE!";
	}
	else {
		cout << "TLE!";
	}
}