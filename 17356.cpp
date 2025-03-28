#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(20) << 1 / (1 + pow(10, (b - a) / 400));
}