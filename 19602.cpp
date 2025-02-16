#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    int t[3] = { 1, 2, 3 };
    int ans = 0;
    for (i = 0; i < 3; i++) {
        cin >> n;
        ans += t[i] * n;
    }
    (ans < 10) ? cout << "sad" : cout << "happy";
}