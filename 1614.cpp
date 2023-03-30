#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned long long int f, c;
	cin >> f;
	cin >> c;
	unsigned long long int answer = c * 4;
	if (f == 1) {
		answer = 8 * c;
	}
	else if (f == 2) {
		if (c % 2 == 0) {
			answer++;
		}
		else {
			answer += 3;
		}
	}
	else if (f == 3) {
		if (c % 2 == 0) {
			answer += 2;
		}
		else {
			answer += 2;
		}
	}
	else if (f == 4) {
		if (c % 2 == 0) {
			answer += 3;
		}
		else {
			answer++;
		}
	}
	else if (f == 5) {
		answer = 4;
		answer += 8 * c;
	}
	cout << answer;
}