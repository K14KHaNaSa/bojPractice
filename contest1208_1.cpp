#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, f;
    cin >> t >> n;
    while (n--) {
        cin >> f;
        t -= f;
    }
    if (t > 0 ? cout << "Padaeng_i Cry" : cout << "Padaeng_i Happy");
}