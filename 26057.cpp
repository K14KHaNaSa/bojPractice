#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int l, t;
    cin >> l >> t;
    cout << t * 2 - l;
}