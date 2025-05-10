#include <iostream>
using namespace std;

void p1w(void) {
    cout << "Player 1 wins.\n";
}

void p2w(void) {
    cout << "Player 2 wins.\n";
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a[2];
    int b[2];
    int aa, bb;
    int tmp;
    cin >> a[0] >> a[1] >> b[0] >> b[1];
    while (a[0] + a[1] + b[0] + b[1] > 0) {
        if (a[0] < a[1]) {
            tmp = a[0];
            a[0] = a[1];
            a[1] = tmp;
        }
        if (b[0] < b[1]) {
            tmp = b[0];
            b[0] = b[1];
            b[1] = tmp;
        }
        aa = a[0] * 10 + a[1];
        bb = b[0] * 10 + b[1];
        if (aa == 21) {
            if (bb == 21)
                cout << "Tie.\n";
            else
                p1w();
        }
        else if (bb == 21)
            p2w();
        else {
            if (a[0] == a[1]) {
                if (b[0] == b[1]) {
                    if (a[0] > b[0])
                        p1w();
                    else if (a[0] < b[0])
                        p2w();
                    else
                        cout << "Tie.\n";
                }
                else
                    p1w();
            }
            else if (b[0] == b[1])
                p2w();
            else {
                if (aa > bb)
                    p1w();
                else if (aa < bb)
                    p2w();
                else
                    cout << "Tie.\n";
            }
        }
        cin >> a[0] >> a[1] >> b[0] >> b[1];
    }
}