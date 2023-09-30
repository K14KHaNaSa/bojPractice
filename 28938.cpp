#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    cin >> n;
    int ans = 0;
    while (n--) {
        cin >> a;
        ans += a;
    }
    if (ans > 0)
        cout << "Right";
    else if (ans < 0)
        cout << "Left";
    else
        cout << "Stay";
}