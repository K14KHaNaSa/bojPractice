#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool roygbiv[2][7];
    char c;
    int n;
    for (int i = 0; i < 7; i++) {
        roygbiv[0][i] = false;
        roygbiv[1][i] = false;
    }
    cin >> n;
    c = cin.get();
    while (n--) {
        c = cin.get();
        if (c == 'r')
            roygbiv[0][0] = true;
        if (c == 'o')
            roygbiv[0][1] = true;
        if (c == 'y')
            roygbiv[0][2] = true;
        if (c == 'g')
            roygbiv[0][3] = true;
        if (c == 'b')
            roygbiv[0][4] = true;
        if (c == 'i')
            roygbiv[0][5] = true;
        if (c == 'v')
            roygbiv[0][6] = true;
        if (c == 'R')
            roygbiv[1][0] = true;
        if (c == 'O')
            roygbiv[1][1] = true;
        if (c == 'Y')
            roygbiv[1][2] = true;
        if (c == 'G')
            roygbiv[1][3] = true;
        if (c == 'B')
            roygbiv[1][4] = true;
        if (c == 'I')
            roygbiv[1][5] = true;
        if (c == 'V')
            roygbiv[1][6] = true;
    }
    bool yes = true;
    bool YES = true;
    for (int i = 0; i < 7; i++) {
        if (!roygbiv[0][i])
            yes = false;
    }
    for (int i = 0; i < 7; i++) {
        if (!roygbiv[1][i])
            YES = false;
    }
    if (yes && YES)
        cout << "YeS";
    else if (yes)
        cout << "yes";
    else if (YES)
        cout << "YES";
    else
        cout << "NO!";
}