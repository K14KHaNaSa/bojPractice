#include <iostream>
#include <cmath>
using namespace std;

int ans, n;
int taste[10][2];

void bt(int nxt, int s, int b) {
    if (nxt < n) {
        ans = min(ans, abs(s * taste[nxt][0] - (b + taste[nxt][1])));
        bt(nxt + 1, (s * taste[nxt][0]), (b + taste[nxt][1]));
        bt(nxt + 1, s, b);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> taste[i][0] >> taste[i][1];
    ans = 1000000001;
    for (int i = 0; i < n; i++) {
        ans = min(ans, abs(taste[i][0] - taste[i][1]));
        bt(i + 1, taste[i][0], taste[i][1]);
    }
    cout << ans;
}