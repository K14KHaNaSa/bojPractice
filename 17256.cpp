#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ac[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cin >> ac[i][j];
    }
    cout << ac[1][0] - ac[0][2] << " " << ac[1][1] / ac[0][1] << " " << ac[1][2] - ac[0][0];
}