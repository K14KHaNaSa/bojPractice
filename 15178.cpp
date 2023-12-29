#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        cout << a << " " << b << " " << c;
        if (a + b + c == 180)
            cout << " Seems OK\n";
        else
            cout << " Check\n";
    }
}