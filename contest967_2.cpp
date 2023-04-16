#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    bool score[10][2] = { false, };
    cin >> a >> b;
    for (int i = 9; i >= 0; i--) {
        if (a >= pow(2, i)) {
            a -= pow(2, i);
            score[i][0] = true;
        }
        if (b >= pow(2, i)) {
            b -= pow(2, i);
            score[i][1] = true;
        }
    }
    int c = 0;
    for (int i = 0; i < 10; i++) {
        if ((!score[i][0] && score[i][1]) || (score[i][0] && !score[i][1])) {
            c += pow(2, i);
        }
    }
    cout << c;
}