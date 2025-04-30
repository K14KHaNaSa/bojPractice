#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char ml, mr, tl, tr;
    cin >> ml >> mr >> tl >> tr;
    if (ml == mr) {
        if (ml == 'S') {
            if (tl == 'R' || tr == 'R') {
                cout << "TK";
                return 0;
            }
        }
        if (ml == 'P') {
            if (tl == 'S' || tr == 'S') {
                cout << "TK";
                return 0;
            }
        }
        if (ml == 'R') {
            if (tl == 'P' || tr == 'P') {
                cout << "TK";
                return 0;
            }
        }
    }
    if (tl == tr) {
        if (tl == 'S') {
            if (ml == 'R' || mr == 'R') {
                cout << "MS";
                return 0;
            }
        }
        if (tl == 'P') {
            if (ml == 'S' || mr == 'S') {
                cout << "MS";
                return 0;
            }
        }
        if (tl == 'R') {
            if (ml == 'P' || mr == 'P') {
                cout << "MS";
                return 0;
            }
        }
    }
    cout << '?';
}