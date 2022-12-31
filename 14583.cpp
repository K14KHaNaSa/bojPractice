#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double h, v, d, fv, foldh, foldv;
	cin >> h >> v;
	d = sqrt(pow(h, 2) + pow(v, 2));
	fv = h * (d - h) / v;
	foldh = sqrt(pow(h, 2) + pow(fv, 2));
	foldv = d * fv / foldh;
	cout << setiosflags(ios::fixed) << setprecision(2) << foldh / 2 << " " << foldv;
}