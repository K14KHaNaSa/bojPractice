#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char chess;
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            chess = cin.get();
            if (chess == 'P') {
                ans++;
            }
            else if (chess == 'p') {
                ans--;
            }
            else if (chess == 'N' || chess == 'B') {
                ans += 3;
            }
            else if (chess == 'n' || chess == 'b') {
                ans -= 3;
            }
            else if (chess == 'R') {
                ans += 5;
            }
            else if (chess == 'r') {
                ans -= 5;
            }
            else if (chess == 'Q') {
                ans += 9;
            }
            else if (chess == 'q') {
                ans -= 9;
            }
        }
        chess = cin.get();
    }
    cout << ans;
}