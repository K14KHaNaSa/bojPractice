#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    if (a > b && a <= b * 2) {
        cout << "YES\n";
        int aba = 0;
        while (a > b + 1) {
            a -= 2;
            b--;
            aba++;
        }
        cout << aba + 1 << "\n";
        while (aba--) {
            cout << "aba\n";
        }
        cout << "a";
        while (b--) {
            cout << "ba";
        }
    }
    else
        cout << "NO";
}