#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, money;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> money;
        cout << money / 25 << " " << (money % 25) / 10 << " " <<
            (money % 25 % 10) / 5 << " " << (money % 5) << "\n";
    }
}