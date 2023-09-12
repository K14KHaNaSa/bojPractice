#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int j, n, q;
    char ch;
    int ans = 0;
    cin >> j >> n;
    ch = cin.get();
    while (n--) {
        ch = cin.get();
        q = 0;
        while (ch != '\n') {
            if (ch >= 'A' && ch <= 'Z')
                q += 4;
            if (ch >= 'a' && ch <= 'z')
                q += 2;
            if (ch >= '0' && ch <= '9')
                q += 2;
            if (ch == ' ')
                q++;
            ch = cin.get();
        }
        if (q <= j)
            ans++;
    }
    cout << ans;
}