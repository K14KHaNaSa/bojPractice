#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int a, b, c;
    cin >> a >> b >> c;
    cout << max((a * b) / c, (a * c) / b);
}