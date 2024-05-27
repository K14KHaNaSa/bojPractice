#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin >> k;
	for (int i = 0; i < 3 * k; i++) {
		for (int j = 0; j < 4 * k; j++) {
			if (i < k && j < k)
				cout << 'G';
			else if (i >= k && i < k * 2 && j >= k && j < k * 2)
				cout << 'I';
			else if (i >= k * 2 && j >= k * 2 && j < k * 3)
				cout << 'S';
			else if (i >= k && i < k * 2 && j >= k * 3)
				cout << 'T';
			else
				cout << '.';
		}
		cout << '\n';
	}
}