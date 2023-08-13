#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int n, answer, s;
	cin >> n;
	answer = 0;
	s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
		answer += i * i * i;
	}
	cout << s << "\n" << s * s << "\n" << answer;
}