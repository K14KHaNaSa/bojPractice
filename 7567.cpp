#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char d;
	d = cin.get();
	bool now; // false = ( /// true = )
	if (d == '(') {
		now = false;
	}
	else {
		now = true;
	}
	int answer = 10;
	while (d != '\n') {
		d = cin.get();
		if (d == '(') {
			if (!now) {
				answer += 5;
			}
			else {
				answer += 10;
				now = false;
			}
		}
		else if (d == ')') {
			if (now) {
				answer += 5;
			}
			else {
				answer += 10;
				now = true;
			}
		}
	}
	cout << answer;
}