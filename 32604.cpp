#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double a;
    cin >> a;
    double pi = 3.14159265359;
    a /= pi;
    cout << fixed << setprecision(15) << sqrt(a) * 2 * pi;
}