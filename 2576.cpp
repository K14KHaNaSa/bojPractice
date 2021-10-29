#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int min = 100, n, sum = 0;
    for (int i = 0; i < 7; i++) {
        cin >> n;
        if ((n % 2) == 1) {
            sum = sum + n;
            if (min > n) {
                min = n;
            }
        }
    }
    if (sum != 0) {
        cout << sum << "\n" << min;
    }
    else {
        cout << "-1";
    }
}