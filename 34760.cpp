#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    int ans = 0;

    for (int i = 0; i < 14; i++) {
        cin >> a;
        ans = max(ans, a + 1);
    }
    cin >> a;
    cout << max(ans, a);
}