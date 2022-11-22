#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int t;
	cin >> t;
	long long int n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << n * n << "\n";
	}
}