#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double a;
    cin >> a;
    cout << fixed << setprecision(8) << 4 * sqrt(a);
}