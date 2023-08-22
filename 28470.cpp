#include <iostream>
using namespace std;

long long int ad[100000][2];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ad[j][i];
        }
    }
    long long int ans = 0;
    double ink;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> ink;
        k = int(ink * 10);
        if (ink >= 1) {
            ans += (ad[i][0] * k) / 10 - ad[i][1];
        }
        else {
            ans += ad[i][0] - (ad[i][1] * k) / 10;
        }
    }
    cout << ans;
}