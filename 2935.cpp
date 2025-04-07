#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b, o, l, s;
    int i;
    cin >> a >> o >> b;
    if (o == "*") {
        cout << 1;
        for (i = 0; i < a.length() + b.length() - 2; i++)
            cout << 0;
    }
    else {
        if (a == b) {
            cout << 2;
            for (i = 0; i < a.length() - 1; i++)
                cout << 0;
        }
        else {
            if (a.length() > b.length()) {
                l = a;
                s = b;
            }
            else {
                l = b;
                s = a;
            }
            cout << l.substr(0, l.length() - s.length()) << s;
        }
    }
}