#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h = 0;
    int v = 0;
    char hv;
    hv = cin.get();
    while (hv != EOF) {
        if (hv == 'H')
            h++;
        if (hv == 'V')
            v++;
        hv = cin.get();
    }
    if (h % 2 == 0) {
        if (v % 2 == 0)
            cout << "1 2\n3 4";
        else
            cout << "2 1\n4 3";
    }
    else { // h % 2 == 1
        if (v % 2 == 0)
            cout << "3 4\n1 2";
        else
            cout << "4 3\n2 1";
    }
}