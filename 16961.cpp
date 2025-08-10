#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int hotel[367][2]; // [T][S]
    int ans[5];
    int n, s, e, i;
    int tb;
    char c;
    cin >> n;
    ans[4] = 0;
    for (i = 1; i < 367; i++) {
        hotel[i][0] = 0;
        hotel[i][1] = 0;
    }
    while (n--) {
        cin >> c >> s >> e;
        if (c == 'T')
            tb = 0;
        else
            tb = 1;
        for (i = s; i <= e; i++)
            hotel[i][tb]++;
        ans[4] = max(ans[4], e - s + 1);
    }
    for (i = 0; i < 4; i++)
        ans[i] = 0;
    for (i = 1; i < 367; i++) {
        if (hotel[i][0] + hotel[i][1] > 0)
            ans[0]++;
        ans[1] = max(ans[1], hotel[i][0] + hotel[i][1]);
        if (hotel[i][0] == hotel[i][1] && hotel[i][0] > 0) {
            ans[2]++;
            ans[3] = max(ans[3], hotel[i][0] * 2);
        }
    }
    for (i = 0; i < 5; i++)
        cout << ans[i] << '\n';
}