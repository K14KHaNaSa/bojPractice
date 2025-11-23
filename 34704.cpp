#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ai;
    int a[4]; // * answer saves in a[3]
    
    cin >> n;
    for (int i = 0; i < 4; i++)
        a[i] = 0;
    while (n--) {
        cin >> ai;
        a[ai - 1]++;
    }
    a[3] += a[2];
    a[0] = max(0, a[0] - a[2]);
    a[3] += a[1] / 2;
    if (a[1] % 2 > 0) {
        a[3]++;
        a[0] = max(a[0] - 2, 0);
    }
    a[3] += a[0] / 4;
    if (a[0] % 4 > 0)
        a[3]++;
    cout << a[3];
}