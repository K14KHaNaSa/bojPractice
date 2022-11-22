#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int maxval = -1;
    int x, y;
    int pan[10][10];
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cin >> pan[i][j];
            if (pan[i][j] > maxval) {
                maxval = pan[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << maxval << "\n" << x << " " << y;
}