#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double r;
	cin >> r;
	r = pow(r, 2);
	cout << setiosflags(ios::fixed) << setprecision(6) << r * M_PI << "\n" << r * 2;
}