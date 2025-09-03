#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    (n * 3 > m) ? cout << (n * 3 - m) * a + b : cout << 0;
}