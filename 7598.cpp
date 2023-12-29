#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string f;
    char bc = '.';
    int n, s;
    cin >> f >> n;
    while (f != "#") {
        while (bc != 'X') {
            cin >> bc >> s;
            if (bc == 'B') {
                if (s + n < 69)
                    n += s;
            }
            if (bc == 'C')
                if (s <= n)
                    n -= s;
        }
        cout << f << " " << n << "\n";
        cin >> f >> n;
        bc = '.'; // dummy reset
    }
}