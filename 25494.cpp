#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        int count = 0;
        for (int x = 1; x <= a; x++) {
            for (int y = 1; y <= b; y++) {
                for (int z = 1; z <= c; z++) {
                    if ((x % y) == (y % z) && (y % z) == (z % x)) {
                        count++;
                    }
                }
            }
        }
        cout << count << "\n";
    }
}