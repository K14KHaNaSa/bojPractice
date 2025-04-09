#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    int mx = 1001;
    int mn = -1;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        mx = min(mx, b);
        mn = max(mn, a);
    }
    (mn > mx) ? cout << "edward is right" : cout << "gunilla has a point";
}