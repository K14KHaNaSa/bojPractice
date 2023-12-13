#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n % 2 == 1) {
        cout << 7;
        n -= 3;
    }
    for (int i = 0; i < n / 2; i++)
        cout << 1;
}