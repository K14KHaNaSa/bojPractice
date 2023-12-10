#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    if (wc > ws + 1 && hc > hs + 1)
        cout << "1";
    else
        cout << "0";
}