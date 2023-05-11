#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, answer;
	cin >> n;
	if (n > 0) {
		answer = 1;
		while (n > 1) {
			n /= 2;
			answer++;
		}
	}
	else if (n < 0) {
		answer = 32;
	}
	else {
		answer = 1;
	}
	cout << answer;
}