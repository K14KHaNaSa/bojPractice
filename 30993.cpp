#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int a, b, c, n, ans;
    cin >> n >> a >> b >> c;
    ans = 1;
    for (int i = 2; i <= n; i++)
        ans *= i;
    for (int i = 2; i <= a; i++)
        ans /= i;
    for (int i = 2; i <= b; i++)
        ans /= i;
    for (int i = 2; i <= c; i++)
        ans /= i;
    cout << ans;
}