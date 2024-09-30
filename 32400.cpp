#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double d[20];
	double a;
	double b = 0;
	for (int i = 0; i < 20; i++) {
		cin >> d[i];
		b += d[i];
	}
	if (d[0] == 20)
		a = (d[0] + d[1] + d[19]) / 3;
	else if (d[19] == 20)
		a = (d[0] + d[18] + d[19]) / 3;
	else {
		for (int i = 1; i < 19; i++) {
			if (d[i] == 20)
				a = (d[i - 1] + d[i] + d[i + 1]) / 3;
		}
	}
	if (a == b / 20)
		cout << "Tie";
	else
		(a > b / 20) ? cout << "Alice" : cout << "Bob";
}