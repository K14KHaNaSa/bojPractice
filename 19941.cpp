#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, ans;
    char ph[20000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> ph[i];
    ans = 0;
    for (int i = 0; i < n; i++) {
        if (ph[i] == 'P') {
            for (int j = max(0, i - k); j <= min(n - 1, i + k); j++) {
                if (j != i) {
                    if (ph[j] == 'H') {
                        ph[j] = 'A'; // ate
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    cout << ans;
}