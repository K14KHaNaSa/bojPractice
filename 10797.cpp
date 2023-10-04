#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int d, c;
    int ans = 0;
    cin >> d;
    for (int i = 0; i < 5; i++) {
        cin >> c;
        if (c == d)
            ans++;
    }
    cout << ans;
}