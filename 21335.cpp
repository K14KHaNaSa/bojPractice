#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.1415926545
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n;
    cin >> n;
    cout << fixed << setprecision(8) << sqrt(n / pi) * 2 * pi;
}