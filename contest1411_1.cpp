#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int ok = 0;
	if (n < 10)
		ok = 1;
	for (int i = 2; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			if (i * j == n)
				ok = 1;
		}
	}
	cout << ok;
}