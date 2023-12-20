#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int z;
    double xyz[2][3]; // A, G
    cin >> z;
    while (z--) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++)
                cin >> xyz[i][j];
        }
        double a = xyz[0][0] * xyz[1][1] + xyz[0][1] * xyz[1][2] + xyz[0][2] * xyz[1][0];
        double g = xyz[0][0] * xyz[1][2] + xyz[0][1] * xyz[1][0] + xyz[0][2] * xyz[1][1];
        if (a > g)
            cout << "ADAM\n";
        else if (a < g)
            cout << "GOSIA\n";
        else
            cout << "=\n";
    }
}