#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char pre, c;
    pre = '.';
    c = cin.get();
    while (c != '\n') {
        if (c != pre)
            pre = c;
        else
            cout << c;
        c = cin.get();
    }
}