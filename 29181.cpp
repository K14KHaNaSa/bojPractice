#include <iostream>
using namespace std;

int a[1000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 1000000001;
    for (int i = 1; i <= 1000; i++) {
        int plus = 0;
        int minus = 0;
        for (int j = 0; j < n; j++) {
            plus += max(i - a[j], 0);
            minus += max(a[j] - i, 0);
        }
        ans = min(ans, min(plus, minus) + max(plus - minus, minus - plus));
    }
    cout << ans;
}