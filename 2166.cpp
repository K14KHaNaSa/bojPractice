#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

long double p[10001][2];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i][0] >> p[i][1];
	}
	p[n][0] = p[0][0];
	p[n][1] = p[0][1];
	long double a = 0;
	long double b = 0;
	for (int i = 1; i <= n; i++) {
		a += p[i][0] * p[i - 1][1];
		b += p[i][1] * p[i - 1][0];
	}
	cout << fixed << setprecision(1) << abs(a - b) / 2;
}