#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// all between jumpcounts
	long int se, sa, sb, sc, sd, sf, sg, ae, be, ce, de, fe, ge;
	long int ac, ad, af, ag, bc, bd, bf, bg, cf, cg, df, dg;
	// coordinates
	long int xs, ys, xe, ye, xa, ya, xb, yb, xc, yc, xd, yd, xf, yf, xg, yg;
	long int points[6];
	cin >> xs >> ys >> xe >> ye >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd >> xf >> yf >> xg >> yg;
	se = abs(xe - xs) + abs(ye - ys);

	sa = abs(xa - xs) + abs(ya - ys);
	sb = abs(xb - xs) + abs(yb - ys);
	sc = abs(xc - xs) + abs(yc - ys);
	sd = abs(xd - xs) + abs(yd - ys);
	sf = abs(xf - xs) + abs(yf - ys);
	sg = abs(xg - xs) + abs(yg - ys);

	ae = abs(xa - xe) + abs(ya - ye);
	be = abs(xb - xe) + abs(yb - ye);
	ce = abs(xc - xe) + abs(yc - ye);
	de = abs(xd - xe) + abs(yd - ye);
	fe = abs(xf - xe) + abs(yf - ye);
	ge = abs(xg - xe) + abs(yg - ye);

	ac = abs(xa - xc) + abs(ya - yc);
	ad = abs(xa - xd) + abs(ya - yd);
	af = abs(xa - xf) + abs(ya - yf);
	ag = abs(xa - xg) + abs(ya - yg);
	bc = abs(xb - xc) + abs(yb - yc);
	bd = abs(xb - xd) + abs(yb - yd);
	bf = abs(xb - xf) + abs(yb - yf);
	bg = abs(xb - xg) + abs(yb - yg);
	cf = abs(xc - xf) + abs(yc - yf);
	cg = abs(xc - xg) + abs(yc - yg);
	df = abs(xd - xf) + abs(yd - yf);
	dg = abs(xd - xg) + abs(yd - yg);
	points[0] = sa;
	points[1] = sb;
	points[2] = sc;
	points[3] = sd;
	points[4] = sf;
	points[5] = sg;
	for (int i = 0; i < 4; i++) {
		points[0] = min(min(points[0], points[1] + 10), min(min(points[2] + ac, points[3] + ad), min(points[4] + af, points[5] + ag)));
		points[1] = min(min(points[1], points[0] + 10), min(min(points[2] + bc, points[3] + bd), min(points[4] + bf, points[5] + bg)));
		points[2] = min(min(points[2], points[3] + 10), min(min(points[0] + ac, points[1] + bc), min(points[4] + cf, points[5] + cg)));
		points[3] = min(min(points[3], points[2] + 10), min(min(points[0] + ad, points[1] + bd), min(points[4] + df, points[5] + dg)));
		points[4] = min(min(points[4], points[5] + 10), min(min(points[0] + af, points[1] + bf), min(points[2] + cf, points[3] + df)));
		points[5] = min(min(points[5], points[4] + 10), min(min(points[0] + ag, points[1] + bg), min(points[2] + cg, points[3] + dg)));
	}
	long int answer = se;
	answer = min(min(answer, min(points[0] + ae, points[1] + be)), min(min(points[2] + ce, points[3] + de), min(points[4] + fe, points[5] + ge)));
	cout << answer;
}