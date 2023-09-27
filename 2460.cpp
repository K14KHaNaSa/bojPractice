#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int i, o;
    int ans = 0;
    int now = 0;
    for (int j = 0; j < 10; j++) {
        cin >> o >> i;
        now += i - o;
        ans = max(ans, now);
    }
    cout << ans;
}