#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, i, j;
    char c;
    int w, udlr, a, v, s, e;
    w = 0;
    udlr = 0;
    a = 0;
    v = 0;
    s = 0;
    e = 0;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        c = cin.get(); // \n
        for (j = 0; j < m; j++) {
            c = cin.get();
            if (c == '#')
                w++;
            if (c == 'U' || c == 'D' || c == 'L' || c == 'R')
                udlr++;
            if (c == 'A')
                a++;
            if (c == 'V')
                v++;
            if (c == 'S')
                s++;
            if (c == 'E')
                e++;
        }
    }
    if (s == 1 && e == 1) {
        if (a > 0)
            cout << 4;
        else {
            if (v > 0)
                cout << 3;
            else {
                if (w < 2 && udlr < 2)
                    cout << 1;
                else
                    cout << 2;
            }
        }
    }
    else
        cout << -1;
}