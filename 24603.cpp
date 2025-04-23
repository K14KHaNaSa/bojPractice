#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, y, a;
    cin >> n >> x >> y;
    while (n--) {
        cin >> a;
        cout << (a * y) / x << '\n';
    }
}