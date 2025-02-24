#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, a, b, mx, mn, ai, bi;
    cin >> n;
    mx = 0;
    mn = 0;
    while (n--) {
        cin >> ai >> bi;
        a = max(ai, bi);
        b = min(ai, bi);
        mx = max(mx, a);
        mn = max(mn, b);
    }
    cout << mx * mn;
}