#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double a, r, p1, p2;
	cin >> a >> p1 >> r >> p2;
	a / p1 > r * r * 3.14159265359 / p2 ? cout << "Slice of pizza" : cout << "Whole pizza";
}