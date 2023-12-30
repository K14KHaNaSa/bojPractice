#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, y;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        if (x < y ? cout << "NO" : cout << "MMM");
        cout << " BRAINS\n";
    }
}