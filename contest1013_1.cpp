#include <iostream>
using namespace std;

int a[1000001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int counter = 0;
	for (int i = 0; i <= 1000000; i++) {
		a[i] = counter;
		counter++;
		if (i / 10000 == 50) {
			counter++;
		}
		else if ((i % 100000) / 1000 == 50) {
			counter++;
		}
		else if ((i % 10000) / 100 == 50) {
			counter++;
		}
		else if ((i % 1000) / 10 == 50) {
			counter++;
		}
		else if ((i % 100) == 50) {
			counter++;
		}
	}
	int n;
	cin >> n;
	cout << a[n];
}