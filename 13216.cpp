#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char ab;
    int a = 0;
    int b = 0;
    int set_a = 0;
    int set_b = 0;
    ab = cin.get();
    while (set_a < 2 && set_b < 2) {
        if (ab == 'A')
            a++;
        if (ab == 'B')
            b++;
        if (a > 20) {
            cout << a << '-' << b << '\n';
            set_a++;
            a = 0;
            b = 0;
        }
        else if (b > 20) {
            cout << a << '-' << b << '\n';
            set_b++;
            a = 0;
            b = 0;
        }
        if (set_a < 2 && set_b < 2)
            ab = cin.get();
    }
    set_a > 1 ? cout << 'A' : cout << 'B';
}