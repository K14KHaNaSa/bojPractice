#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    char v; // visit
    int combo = 0;
    int mx_combo = 0;
    cin >> n >> k;
    v = cin.get(); // \n
    while (n--) {
        v = cin.get();
        if (v == '1')
            combo = 0;
        else {
            combo++;
            mx_combo = max(mx_combo, combo);
        }
    }
    (mx_combo < k) ? cout << 1 : cout << 0;
}