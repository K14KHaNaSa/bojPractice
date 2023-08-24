#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int s = 0;
    int p = 0;
    for (int i = 0; i < n / 2; i++) {
        s += a[i];
    }
    for (int i = n / 2; i < n; i++) {
        p += a[i];
    }
    cout << s << " " << p;
}