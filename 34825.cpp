#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int xa, xb, ya, yb, ax, ay; //  (a, b, answer) x, y
    bool odd = false;
    cin >> xa >> ya >> xb >> yb;
    if ((abs(xa - xb) + abs(ya - yb)) % 2 > 0)
        cout << -1;
    else {
        if (xa < xb)
            ax = xb - (xb - xa) / 2;
        else
            ax = xa - (xa - xb) / 2;
        if (abs(xa - xb) % 2 > 0)
            odd = true;
        if (ya < yb) {
            ay = yb - (yb - ya) / 2;
            if (odd) {
                if (abs(xa - ax) + abs(ya - ay) == abs(xb - ax) + abs(yb - ay))
                    odd = false;// dummy
                else if (abs(xa - ax) + abs(ya - (ay - 1)) == abs(xb - ax) + abs(yb - (ay - 1)))
                    ay--;
                else
                    ay++;
            }
        }
        else {
            ay = ya - (ya - yb) / 2;
            if (odd) {
                if (abs(xa - ax) + abs(ya - ay) == abs(xb - ax) + abs(yb - ay))
                    odd = false;// dummy
                else if (abs(xa - ax) + abs(ya - (ay - 1)) == abs(xb - ax) + abs(yb - (ay - 1)))
                    ay--;
                else
                    ay++;
            }
        }
        cout << ax << ' ' << ay;
    }
}

// anticase pre-submit (0, 6), (1, 1)?