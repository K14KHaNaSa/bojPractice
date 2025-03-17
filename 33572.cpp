#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, m, a;
    cin >> n >> m;
    while (n--) {
        cin >> a;
        m -= (a - 1);
    }
    m > 0 ? cout << "OUT" : cout << "DIMI";
}