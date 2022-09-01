#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, v;
    int sumv = 0;
    int maxv = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        sumv += v;
        maxv = max(maxv, v);
    }
    cout << sumv - maxv;
}