#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, i;
    int score[5] = { 0 };
    cin >> t;
    for (i = 0; i < t; i++)
        cin >> score[i];
    int ans = 0;
    if (score[0] > score[2])
        ans += (score[0] - score[2]) * 508;
    else
        ans += (score[2] - score[0]) * 108;
    if (score[1] > score[3])
        ans += (score[1] - score[3]) * 212;
    else
        ans += (score[3] - score[1]) * 305;
    if (t > 4)
        ans += score[4] * 707;
    cout << ans * 4763;
}