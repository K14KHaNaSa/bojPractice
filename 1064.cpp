#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	double xa, ya, xb, yb, xc, yc;
	vector<double> abc(3);
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	abc[0] = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
	abc[1] = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
	abc[2] = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));
	sort(abc.begin(), abc.end());
	double longl = abc[2];
	double midl = abc[1];
	double shortl = abc[0];
	if ((yb-ya)*(xc-xa) == (xb-xa)*(yc-ya)) {
		cout << "-1.0";
	}
	else {
		cout << fixed << setprecision(15) << (longl - shortl) * 2;
	}
}