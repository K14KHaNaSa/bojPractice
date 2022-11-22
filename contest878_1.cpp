#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//failed
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, r, c;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> r >> c;
        int bigone = max(r, c);
        int smallone = min(r, c);
        unsigned long long int white = r * c;
        unsigned long long int black = (bigone - 1) * smallone + (smallone - 1) * bigone;
        for (int i = 1; i <= smallone; i++) {
            white += 2 * (bigone - i) * (smallone - i);
            black += max(0, (bigone - i - 1) * (smallone - i) + (smallone - i - 1) * (bigone - i));
        }
        cout << white << " " << black << "\n";
    }
} 