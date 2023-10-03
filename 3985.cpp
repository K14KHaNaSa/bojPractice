#include <iostream>
using namespace std;

int rc[1001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int l, n, p, k;
    cin >> l >> n;
    int guess = 0;
    int guessi = 0;
    int real = 0;
    int reali = 0;
    for (int i = 1; i <= l; i++)
        rc[i] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> p >> k;
        if (k - p > guess) {
            guess = k - p;
            guessi = i;
        }
        int nowreal = 0;
        for (int j = p; j <= k; j++) {
            if (rc[j] == 0)
                nowreal++;
            rc[j] = i;
        }
        if (nowreal > real) {
            real = nowreal;
            reali = i;
        }
    }
    cout << guessi << "\n" << reali;
}