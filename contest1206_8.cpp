#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    int ans;
    for (int i = 1; i <= 9; i++) {
        cout << "? A " << i << endl;
        cin >> ans;
        if (ans > 0)
            a = i;
    }
    for (int i = 1; i <= 9; i++) {
        cout << "? B " << i << endl;
        cin >> ans;
        if (ans > 0)
            b = i;
    }
    cout << "! " << a + b;
}