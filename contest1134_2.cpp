#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, g, p;
    cin >> n >> k;
    while (k--) {
        cin >> g;
        p = g * 100 / n;
        if (p > 96)
            cout << "9 ";
        else if (p > 89)
            cout << "8 ";
        else if (p > 77)
            cout << "7 ";
        else if (p > 60)
            cout << "6 ";
        else if (p > 40)
            cout << "5 ";
        else if (p > 23)
            cout << "4 ";
        else if (p > 11)
            cout << "3 ";
        else if (p > 4)
            cout << "2 ";
        else
            cout << "1 ";
    }
}