#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	double pi = 3.14159265;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double a1, p1, r2, p2;
		cin >> a1 >> p1 >> r2 >> p2;
		if ((r2 * r2 * pi) / p2 > a1 / p1) {
			cout << "Whole pizza\n";
		}
		else {
			cout << "Slice of pizza\n";
		}
	}
}