#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int beer, malt, wine, soft, seltzer, water;
    cin >> beer >> malt >> wine >> soft >> seltzer >> water;
    cout << (beer + malt + wine + soft + seltzer + water) * 5;
}