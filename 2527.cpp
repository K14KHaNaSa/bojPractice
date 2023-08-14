#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x1, y1, p1, q1, x2, y2, p2, q2;
	//(x,q)	(p,q)//
	//			 //
	//(x,y)	(p,y)//
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> p1 >> q1 >> x2 >> y2 >> p2 >> q2;
		if ((p1 == x2 && q1 == y2) ||
			(x1 == p2 && q1 == y2) ||
			(x1 == p2 && y1 == q2) ||
			(p1 == x2 && y1 == q2)) {
			cout << "c\n";
		}
		//  2
		// 3 1
		//  4
		else if (((p1 == x2) && ((y1 <= y2 && q1 >= y2) || (y1 <= q2 && y1 >= y2) || (y1 >= y2 && q1 <= q2))) ||
			((q1 == y2) && ((x1 >= x2 && x1 <= p2) || (p1 >= x2 && y1 <= y2) || (y1 >= y2 && p1 <= p2))) ||
			((p2 == x1) && ((y2 <= y1 && q2 >= y1) || (y2 <= q1 && y2 >= y1) || (y2 >= y1 && q2 <= q1))) ||
			((q2 == y1) && ((x2 >= x1 && x2 <= p1) || (p2 >= x1 && y2 <= y1) || (y2 >= y1 && p2 <= p1)))) {
			cout << "b\n";
		}
		//   2
		// 4   6
		//   8
		else if ((q1 <= y2) || (x1 >= p2) || (y1 >= q2) || (p1 <= x2)) {
			cout << "d\n";
		}
		else {
			cout << "a\n";
		}
	}
}