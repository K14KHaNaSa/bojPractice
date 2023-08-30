#include <iostream>
using namespace std;

int card[2];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m;
    cin >> card[0] >> card[1];
    int flip = 0;
    while (m--) {
        cin >> k;
        if (flip == 0) {
            if (card[0] <= k) {
                flip = 1;
            }
        }
        else if (flip == 1) {
            if (card[1] <= k) {
                flip = 0;
            }
        }
    }
    if (flip > 0) {
        cout << card[1];
    }
    else {
        cout << card[0];
    }
}