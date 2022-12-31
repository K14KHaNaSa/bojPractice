#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long answer = 2;
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++) {
		answer *= i;
		answer %= 1000000007;
	}
	cout << answer;
}