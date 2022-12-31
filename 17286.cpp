#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int abcx[3];
	int abcy[3];
	int yumix, yumiy;
	cin >> yumix >> yumiy;
	for (int i = 0; i < 3; i++) {
		cin >> abcx[i] >> abcy[i];
	}
	double ab = sqrt(pow(abs(abcx[0] - abcx[1]), 2) + pow(abs(abcy[0] - abcy[1]), 2));
	double ac = sqrt(pow(abs(abcx[0] - abcx[2]), 2) + pow(abs(abcy[0] - abcy[2]), 2));
	double bc = sqrt(pow(abs(abcx[1] - abcx[2]), 2) + pow(abs(abcy[1] - abcy[2]), 2));
	double ya = sqrt(pow(abs(yumix - abcx[0]), 2) + pow(abs(yumiy - abcy[0]), 2));
	double yb = sqrt(pow(abs(yumix - abcx[1]), 2) + pow(abs(yumiy - abcy[1]), 2));
	double yc = sqrt(pow(abs(yumix - abcx[2]), 2) + pow(abs(yumiy - abcy[2]), 2));
	double a = min(ab + bc, ac + bc);
	double b = min(ab + ac, bc + ac);
	double c = min(ac + ab, bc + ab);
	int answer = min(min(ya + a, yb + b), yc + c);
	cout << answer;
}