#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans[4] = { n, 1, 1, n * 4 + 2 };
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            for (int j = 1; j <= n / i; j++) {
                if ((n / i) % j == 0) {
                    int k = n / (i * j);
                    if (i * j * 2 + i * k * 2 + j * k * 2 < ans[3]) {
                        ans[0] = i;
                        ans[1] = j;
                        ans[2] = k;
                        ans[3] = i * j * 2 + i * k * 2 + j * k * 2;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
        cout << ans[i] << " ";
}