#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long int n, x, w;
    cin >> n;
    while (n--) {
        cin >> x >> w;
        int act = 0;
        while (x < w) {
            x *= 2;
            act++;
        }
        cout << act << "\n";
    }
}