#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long left, right, k, a, b, c, d;
	cin >> k >> a >> b >> c >> d;
	left = a * k + b;
	right = c * k + d;
	if (left == right) {
		cout << "Yes " << left;
	}
	else {
		cout << "No";
	}
}