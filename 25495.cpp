#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, connect;
    int prevconn = 0;
    int batt = 0;
    int prevbatt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> connect;
        if (prevconn == connect && batt!=0) {
            batt += prevbatt * 2;
            prevbatt *= 2;
        }
        else {
            batt += 2;
            prevbatt = 2;
            prevconn = connect;
        }
        if (batt >= 100) {
            batt = 0;
            prevconn = 0;
            prevbatt = 0;
        }
    }
    cout << batt;
}