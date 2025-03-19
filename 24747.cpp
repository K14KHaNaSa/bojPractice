#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    char ans[5];
    char npt[5];
    bool y[26];
    int i, j, g;
    bool win = false;
    for (i = 0; i < 26; i++)
        y[i] = false;
    for (i = 0; i < 5; i++) {
        c = cin.get();
        ans[i] = c;
        y[c - 'A'] = true;
    }
    for (j = 0; j < 7; j++) {
        c = cin.get(); // \n
        g = 0;
        for (i = 0; i < 5; i++) {
            c = cin.get();
            npt[i] = c;
            if (c == ans[i])
                g++;
        }
        if (!win) {
            if (g > 4) {
                cout << "WINNER";
                win = true;
            }
            else {
                if (j > 5) {
                    cout << "LOSER";
                    return 0;
                }
                for (i = 0; i < 5; i++) {
                    if (npt[i] == ans[i])
                        cout << 'G';
                    else if (y[npt[i] - 'A'])
                        cout << 'Y';
                    else
                        cout << 'X';
                }
            }
            cout << '\n';
        }
    }
}