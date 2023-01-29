#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<unsigned long long int> fib(116);
	int n;
	cin >> n;
	fib[0] = 1;
	fib[1] = 1;
	fib[2] = 1;
	for (int i = 3; i < n; i++) {
		fib[i] = fib[i - 1] + fib[i - 3];
	}
	cout << fib[n - 1];
}