#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> d;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e, di;
    cin >> n >> e;
    for (int i = 0; i < n; i++) {
        cin >> di;
        d.push_back(di);
    }
    d.push_back(-1000000001);
    sort(d.begin(), d.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] + e <= d[i + 1])
            ans++;
    }
    cout << ans;
}