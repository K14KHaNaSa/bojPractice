#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a > 7) && (b == c) && (d > 7) ? cout << "ignore" : cout << "answer");
}