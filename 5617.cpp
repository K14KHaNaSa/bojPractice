#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> sq(3);
    int z = 0;
    int y = 0;
    int d = 0;
    bool ok = true;
    while (cin >> sq[0] >> sq[1] >> sq[2]) {
        sort(sq.begin(), sq.end());
        if (sq[0] + sq[1] > sq[2] && ok) {
            if (sq[0] * sq[0] + sq[1] * sq[1] > sq[2] * sq[2])
                y++;
            else if (sq[0] * sq[0] + sq[1] * sq[1] == sq[2] * sq[2])
                z++;
            else
                d++;
        }
        else
            ok = false;
    }
    cout << z + y + d << " " << z << " " << y << " " << d << "\n";
}