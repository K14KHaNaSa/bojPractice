#include <iostream>
using namespace std;

long long int n, mn, ans;
long long int a[100000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ans = 0;
    mn = 1000000001;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    for (int i = 0; i < n; i++)
        ans += a[i] - mn;
    cout << ans;
}