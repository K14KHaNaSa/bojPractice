#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    if (n == m + 14)
        cout << n - 7;
    else
        (n - 7 > 0) ? cout << n - 7 : cout << m + 7;
}