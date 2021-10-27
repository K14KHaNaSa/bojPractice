#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, y = 0, m = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        y = y + (a[i] / 30 + 1) * 10;
        m = m + (a[i] / 60 + 1) * 15;
    }
    if (y <= m) cout << "Y ";
    if (m <= y) {
        cout << "M " << m;
    }
    else {
        cout << y;
    }
}