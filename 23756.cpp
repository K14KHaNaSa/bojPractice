#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, an;
    cin >> n >> a;
    int minnov = 0;
    for (int i = 0; i < n; i++) {
        cin >> an;
        if (an > a) {
            if (an - a < 360 - an + a) {
                minnov += an - a;
            }
            else {
                minnov += 360 - an + a;
            }
        }
        else {
            if (a - an < 360 - a + an) {
                minnov += a - an;
            }
            else {
                minnov += 360 - a + an;
            }
        }
        a = an;
    }
    cout << minnov;
}