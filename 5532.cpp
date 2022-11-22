#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    while (a > 0 || b > 0) {
        a -= c;
        b -= d;
        n--;
    }
    cout << n;
}