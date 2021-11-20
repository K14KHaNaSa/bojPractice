#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sing = 0;
    cin >> n;
    for (int i = 1; n; i++) {
        sing++;
        n = n - sing;
        if (n <= 0) {
            cout << i;
            break;
        }
        if (n <= sing) {
            sing = 0;
        }
    }
}