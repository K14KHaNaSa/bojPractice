#include <iostream>
using namespace std;

void p(void) {
	cout << "Possible\n";
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	double a, b, c;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		if (a + b == c)
			p();
		else if (a - b == c)
			p();
		else if (b - a == c)
			p();
		else if (a * b == c)
			p();
		else if (a / b == c)
			p();
		else if (b / a == c)
			p();
		else
			cout << "Impossible\n";
	}
}