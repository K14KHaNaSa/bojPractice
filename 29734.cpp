#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, m, t, s;
    cin >> n >> m >> t >> s;
    long long int dok, zip;
    dok = t + (m / 8) * (s + t * 2) + m;
    if (m % 8 == 0) {
        dok -= t * 2 + s;
    }
    zip = (n / 8) * s + n;
    if (n % 8 == 0) {
        zip -= s;
    }
    if (dok < zip) {
        cout << "Dok\n" << dok;
    }
    else {
        cout << "Zip\n" << zip;
    }
}