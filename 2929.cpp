#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char mc;
    int nop = 0;
    int p = 0;
    mc = cin.get();
    while (mc != EOF) {
        if (mc >= 'A' && mc <= 'Z') {
            if (p % 4 > 0) {
                nop += 4 - (p % 4);

            }
            p = 1;
        }
        else
            p++;
        mc = cin.get();
    }
    cout << nop;
}