#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long int n, m, a, answer, tmp;
	cin >> n >> m;
	answer = 1;
	for (long long int i = 0; i < n; i++) {
		cin >> a;
		tmp = answer * (a % m);
		answer = tmp % m;
	}
	cout << answer % m;
}