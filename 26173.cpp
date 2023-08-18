#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    unsigned long long int n;
    cin >> n;
    cout << fixed << setprecision(10) << sqrt(n / 3.14159265358979) * 2;
}