#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++)
            cout << i * m + j + 1 << ' ';
        cout << (i + 1) * m << '\n';
    }
}