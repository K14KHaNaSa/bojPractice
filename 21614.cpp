#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, dir;
    bool d = false; // false = left / true = right
    cin >> n;
    while (n < 99999) {
        dir = (n / 10000 + (n % 10000) / 1000);
        if (dir % 2 == 1)
            d = false;
        else if (dir != 0)
            d = true;
        d ? cout << "right " : cout << "left ";
        cout << (n % 1000) << '\n';
        cin >> n;
    }
}