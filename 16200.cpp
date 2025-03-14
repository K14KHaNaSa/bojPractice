#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ans, i;
    ans = 0;
    cin >> n;
    vector<int> x(n);
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    i = 0;
    while (i < n) {
        i += x[i];
        ans++;
    }
    cout << ans;
}