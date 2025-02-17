#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, ans;
    cin >> n;
    ans = 0;
    while (n > 2) {
        ans += (n - 2) * (n - 2);
        n -= 2;
    }
    cout << ans << "\n3";
}