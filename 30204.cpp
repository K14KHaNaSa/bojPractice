#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, p;
    int ans = 0;
    cin >> n >> x;
    while (n--) {
        cin >> p;
        ans += p;
    }
    if (ans % x == 0)
        cout << "1";
    else
        cout << "0";
}