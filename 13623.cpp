#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && a != c)
        cout << "C";
    else if (a == c && a != b)
        cout << "B";
    else if (b == c && a != b)
        cout << "A";
    else
        cout << "*";
}