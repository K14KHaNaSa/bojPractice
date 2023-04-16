#include <iostream>
using namespace std;

int tile[16];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    tile[1] = 3;
    tile[2] = 11;
    for (int i = 3; i <= 15; i++) {
        tile[i] = tile[i - 1] * 3 + 2;
        for (int j = i - 2; j > 0; j--) {
            tile[i] += tile[j] * 2;
        }
    }
    int n;
    cin >> n;
    if (n % 2 == 1) {
        cout << "0";
    }
    else {
        cout << tile[n / 2];
    }
}