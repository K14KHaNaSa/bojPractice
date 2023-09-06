#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans = 1;
    while (n--) {
        ans *= 2;
    }
    cout << (ans + 1) * (ans + 1);
}