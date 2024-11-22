#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, d;
	cin >> n >> d;
	if (n > 5)
		cout << "Love is open door";
	else {
		for (int i = 1; i < n; i++) {
			if (d == 1)
				d = 0;
			else
				d = 1;
			cout << d << '\n';
		}
	}
}