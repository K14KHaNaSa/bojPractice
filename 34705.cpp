#include <iostream>
using namespace std;

int t, x, y, i;
int a[5];
bool ans, include, disclude;

void bt(int level, int sum) {
    if (level < 5) {
        if (sum >= x && sum <= y) {
            ans = true;
        }
        else {
            bt(level + 1, sum + a[level]);
            bt(level + 1, sum);
        }
    }
    else {
        if (sum >= x && sum <= y)
            ans = true;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        cin >> x >> y;
        ans = false;
        for (i = 0; i < 5; i++)
            cin >> a[i];
        bt(0, 0);
        ans ? cout << "YES\n" : cout << "NO\n";
    }
}