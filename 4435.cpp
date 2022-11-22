#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, g, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int gh, gp, gf, gd, ge, gm;
        cin >> gh >> gp >> gf >> gd >> ge >> gm;
        int so, sh, sw, sg, su, st, sm;
        cin >> so >> sh >> sw >> sg >> su >> st >> sm;
        g = gh + gp * 2 + (gf + gd) * 3 + ge * 4 + gm * 10;
        s = so + (sh + sw + sg) * 2 + su * 3 + st * 5 + sm * 10;
        if (g > s) {
            cout << "Battle " << i + 1 << ": Good triumphs over Evil\n";
        }
        else if (s > g) {
            cout << "Battle " << i + 1 << ": Evil eradicates all trace of Good\n";
        }
        else {
            cout << "Battle " << i + 1 << ": No victor on this battle field\n";
        }
    }
}