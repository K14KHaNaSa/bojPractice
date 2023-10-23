#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, h, v;
    cin >> n >> h >> v;
    cout << max(n - h, h) * max(n - v, v) * 4;
}