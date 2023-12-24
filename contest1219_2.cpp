#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    for (int i = n * -1; i <= n; i++) {
        if (i != 0) {
            for (int j = n * -1; j <= n; j++) {
                if (i + j > n * -1 && i + j <= n + 1)
                    ans++;
            }
        }
    }
    cout << (n * 2 + 1) * (n * 2 + 1) + ans;
}