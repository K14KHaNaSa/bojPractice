#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n % 7 == 0) {
        while (n > 0) {
            if (n % 10 == 7) {
                cout << "3";
                return 0;
            }
            n /= 10;
        }
        cout << "1";
    }
    else {
        while (n > 0) {
            if (n % 10 == 7) {
                cout << "2";
                return 0;
            }
            n /= 10;
        }
        cout << "0";
    }
}