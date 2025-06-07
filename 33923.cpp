#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    if (n != m)
        cout << min(n - 1, m - 1) * min(n - 1, m - 1);
    else
        cout << (n - 1) * (n - 1) - (n - 2) * 2;
}