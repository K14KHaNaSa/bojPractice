#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, h, w;
    char map[40][40];
    char c;
    bool oil;
    int ans;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> h >> w;
        for (int j = 0; j < h; j++) {
            c = cin.get();
            for (int k = 0; k < w; k++)
                map[j][k] = cin.get();
        }

        cout << "Data Set " << i << ":\n";
        for (int j = 0; j < w; j++) {
            ans = 0;
            oil = false;
            for (int k = 0; k < h; k++) {
                if (map[k][j] == 'X') {
                    cout << ans << ' ';
                    oil = true;
                    break;
                }
                else if (map[k][j] == 'H')
                    ans += 3;
                else if (map[k][j] == 'S')
                    ans++;
            }
            if (!oil)
                cout << "N ";
        }
        cout << "\n\n";
    }
}