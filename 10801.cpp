#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a = 0;
	int b = 0;
	int c[10];
	int d;
	for (int i = 0; i < 10; i++)
		cin >> c[i];
	for (int i = 0; i < 10; i++) {
		cin >> d;
		if (c[i] > d)
			a++;
		if (c[i] < d)
			b++;
	}
	(a == b) ? cout << "D" : (a > b ? cout << "A" : cout << "B");
}