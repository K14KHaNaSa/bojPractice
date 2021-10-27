#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b;
    cin >> c;
    b = b + c;
    if (b >= 60) {
        a = a + (b / 60);
        b = b % 60;
        if (a >= 24) {
            a = a - 24;
        }
    }
    cout << a << " " << b;
}