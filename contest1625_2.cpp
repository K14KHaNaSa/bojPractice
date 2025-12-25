#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double w, h, r;
    cin >> w >> h >> r;
    cout << fixed << setprecision(2) << w * h - (3.1415 * r * r / 4);
}