#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string today;
    int n;
    cin >> today >> n;
    int tyear = stoi(today.substr(0, 4));
    int tmonth = stoi(today.substr(5, 2));
    int tday = stoi(today.substr(8, 2));
    int ans = (tyear - 1) * 360 + (tmonth - 1) * 30 + (tday - 1) + n;
    cout << ans / 360 + 1 << "-";
    if ((ans % 360) / 30 + 1 < 10)
        cout << "0"; 
    cout << (ans % 360) / 30 + 1 << "-";
    if (ans % 30 + 1 < 10)
        cout << "0";
    cout << ans % 30 + 1;
}