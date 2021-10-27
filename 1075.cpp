#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, f;
    cin >> n;
    cin >> f;
    n = (n / 100) * 100;
    for (int i = 0; i <= 100; i++) {
        if (i < 10) {
            if (((n + i) % f) == 0) {
                cout << "0" << i; break;
            }
        }
        if (((n + i) % f) == 0) {
            cout << i; break;
        }
    }
}