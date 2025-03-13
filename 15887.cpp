#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, op, i, l, r;
    queue<pair<int, int>> lr;
    int card[1001];
    int temp[1001];
    op = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> card[i];
    for (i = 1; i < n ; i++) {
        if (card[i] != i) {
            l = i;
            temp[i] = card[i];
            for (int j = i + 1; j <= n; j++) {
                temp[j] = card[j];
                if (card[j] == i) {
                    r = j;
                    break;
                }
            }
            for (int j = 0; i + j <= r; j++)
                card[i + j] = temp[r - j];
            op++;
            lr.push(make_pair(l, r));
        }
    }
    cout << op << '\n';
    while (!lr.empty()) {
        cout << lr.front().first << ' ' << lr.front().second << '\n';
        lr.pop();
    }
}