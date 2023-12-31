#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, sl;
    char c;
    cin >> n;
    c = cin.get();
    while (n--) {
        sl = 0;
        while (c != ' ') {
            c = cin.get();
            if (c == 'x' || c == 'X') {
                x = sl;
            }
            sl++;
        }
        sl = 0;
        while (c != '\n') {
            c = cin.get();
            if (sl == x)
                if (c >= 'a' && c <= 'z' ? cout << char(c - ('a' - 'A')) : cout << c);
            sl++;
        }
    }
}