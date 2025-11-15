#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char x[1000][1000];
    int n, m;
    char c;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        c = cin.get();
        for (int j = 0; j < m; j++) {
            c = cin.get();
            x[i][j] = c;
            if (i > 0 && j > 0) {
                if (x[i][j] == '1') {
                    if (x[i - 1][j] == '1' && x[i][j - 1] == '1' && x[i - 1][j - 1] == '1') {
                        cout << 1;
                        return 0;
                    }
                }
            }
        }
    }
    cout << 0;
    return 0;
}