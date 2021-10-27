#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a >> b >> c;
    cin >> d;
    c = c + d;
    if (c >= 60) {
        b = b + (c / 60);
        c = c % 60;
        if (b >= 60) {
            a = a + (b / 60);
            b = b % 60;
            if (a >= 24) {
                a = a % 24;
            }
        }
    }
    cout << a << " " << b << " " << c;
}