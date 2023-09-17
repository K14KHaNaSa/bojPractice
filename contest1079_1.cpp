#include <iostream>
using namespace std;

int a[1000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b >= a[i])
            ans++;
    }
    cout << ans;
}