#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r, b;
    cin >> r >> b;
    int v = r + b;
    for (int w = 3; w <= v; w++) {
        if (v % w == 0) {
            int l = v / w;
            if (r == l * 2 + w * 2 - 4) {
                cout << l << " " << w;
                break;
            }
        }
    }
}