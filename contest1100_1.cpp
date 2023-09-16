#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double w, h;
    cin >> w >> h;
    cout << fixed << setprecision(1) << w * h / 2;
}