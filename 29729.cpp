#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s, n, m, ord;
    cin >> s >> n >> m;
    n += m;
    int now = 0;
    while (n--) {
        cin >> ord;
        if (now == s && ord == 1) {
            s *= 2;
            now++;
        }
        else if (ord == 1)
            now++;
        else if (ord == 0)
            now--;
    }
    cout << s;
}