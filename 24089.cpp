#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, x, y;
    cin >> n >> m;
    int ball[2001];
    for (int i = 1; i <= n; i++)
        ball[i] = i;
    while (m--) {
        cin >> x >> y;
        ball[x] = y;
    }
    for (int i = 1; i <= n; i++)
        cout << ball[i] << "\n";
}