#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int v[5];
    for (int i = 0; i < 5; i++)
        cin >> v[i];
    int ans = 0;
    for (int i = 1; i < 5; i++) {
        if (v[0] - v[i] <= 1000)
            ans++;
    }
    cout << ans;
}