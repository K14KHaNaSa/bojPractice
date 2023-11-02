#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int d[1000];
    int n;
    cin >> n;
    while (n > 0) {
        for (int i = 0; i < n; i++)
            cin >> d[i];
        int ans = 0;
        for (int i = 0; i < n - 3; i++) {
            if (d[i] == 2 && d[i + 1] == 0 && d[i + 2] == 2 && d[i + 3] == 0)
                ans++;
        }
        cout << ans << "\n";
        cin >> n;
    }
}