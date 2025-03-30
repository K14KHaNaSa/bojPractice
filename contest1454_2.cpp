#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int ans[101];
    ans[1] = 0;
    ans[2] = 2;
    for (int i = 3; i <= 100; i++)
        ans[i] = ans[i - 2] * 2;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << ans[n] << '\n';
    }
}