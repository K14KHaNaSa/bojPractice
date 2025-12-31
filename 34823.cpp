#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int y, c, p;
    cin >> y >> c >> p;
    cout << min(y, min(c / 2, p));
}