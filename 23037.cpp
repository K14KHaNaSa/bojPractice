#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d, e;
	int answer;
	a = cin.get();
	b = cin.get();
	c = cin.get();
	d = cin.get();
	e = cin.get();
	answer = pow(a - 48, 5) + pow(b - 48, 5) + pow(c - 48, 5) + pow(d - 48, 5) + pow(e - 48, 5);
	cout << answer;
}