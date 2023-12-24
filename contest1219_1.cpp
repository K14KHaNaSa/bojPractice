#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, v;
    char ox;
    int ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        ox = cin.get();
        v = 0;
        for (int j = 0; j < m; j++) {
            ox = cin.get();
            if (ox == 'O')
                v++;
        }
        if (v * 2 > m)
            ans++;
    }
    cout << ans;
}