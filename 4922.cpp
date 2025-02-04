#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	while (n > 0) {
		cout << n << " => ";
		(n > 1) ? cout << n * n - (n - 1) << '\n' : cout << "1\n";
		cin >> n;
	}
}