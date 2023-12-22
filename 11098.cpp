#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, p, c, mxc;
    string nm, mxn;
    cin >> n;
    while (n--) {
        cin >> p;
        p--;
        cin >> mxc >> mxn;
        while (p--) {
            cin >> c >> nm;
            if (mxc < c) {
                mxc = c;
                mxn = nm;
            }
        }
        cout << mxn << "\n";
    }
}