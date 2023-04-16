#include <iostream>
using namespace std;
int zo[500];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char zeroone;
    int z = 0;
    int o = 0;
    zeroone = cin.get();
    int l = 1;
    if (zeroone == '0') {
        zo[0] = 0;
        z++;
    }
    else {
        zo[0] = 1;
        o++;
    }
    zeroone = cin.get();
    while (zeroone != EOF) {
        if (zeroone == '0') {
            z++;
            zo[l] = 0;
        }
        else {
            o++;
            zo[l] = 1;
        }
        l++;
        zeroone = cin.get();
    }
    int c = l - 1; //cursor
    z /= 2;
    o /= 2;
    while (z > 0) {
        if (zo[c] == 0) {
            zo[c] = 2;
            z--;
        }
        c--;
    }
    c = 0;
    while (o > 0) {
        if (zo[c] == 1) {
            zo[c] = 2;
            o--;
        }
        c++;
    }
    for (int i = 0; i < l-1; i++) {
        if (zo[i] < 2) {
            cout << zo[i];
        }
    }
}