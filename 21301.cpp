#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double s, n, avg;
	double t[10];
	n = 10;
	avg = 0;
	for (int i = 0; i < 10; i++) {
		cin >> t[i];
		avg += t[i];
	}
	avg /= 10;
	s = 0;
	for (int i = 0; i < 10; i++)
		s += (t[i] - avg) * (t[i] - avg);
	s /= 9;
	if (s > 1)
		cout << "NOT ";
	cout << "COMFY";
}