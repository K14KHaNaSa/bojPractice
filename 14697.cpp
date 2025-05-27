#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, n;
    cin >> a >> b >> c >> n;
    for (int i = 0; i <= n / a; i++) {
        for (int j = 0; j <= n / b; j++) {
            for (int k = 0; k <= n / c; k++) {
                if (i * a + j * b + k * c == n) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
}