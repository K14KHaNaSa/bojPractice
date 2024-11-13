#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	(n <= 100000 && n % 2024 == 0) ? cout << "Yes" : cout << "No";
}