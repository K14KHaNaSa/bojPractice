#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ans;
    cin >> n;
    ans = 7 + (n - 1) * 7;
    cout << 2024 + ans / 12 << ' ' << (ans % 12) + 1;
}