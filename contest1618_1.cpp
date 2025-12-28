#include <iostream>
using namespace std;

bool p[100002];
int sp[100002]; // prefix sum

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, j;
    bool special;
    // prime number?
    p[0] = false;
    p[1] = false;
    for (i = 2; i <= 100001; i++)
        p[i] = true;
    for (i = 2; i <= 100001; i++) {
        if (p[i]) {
            for (j = 2; j * i <= 100001; j++)
                p[i * j] = false;
        }
    }
    sp[0] = 0;
    for (i = 1; i <= 100000; i++) {
        special = true;
        sp[i] = sp[i - 1];
        j = 10;
        if (i < 10) {
            if (!p[i + 1]) {
                special = false;
            }
        }
        else {
            if (!p[i + 1]) {
                special = false;
            }
            while (i / j > 0 && special) {
                if (!p[(i / j) * (i % j) + 1]) {
                    special = false;
                    break;
                }
                j *= 10;
            }
        }
        if (special)
            sp[i]++;
    }


    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << sp[n] << '\n';
    }
}