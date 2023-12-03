#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n, ans, i;
    cin >> n;
    ans = 1;
    for (i = n; i > n - 5; i--)
        ans *= i;
    cout << ans / 120;
}