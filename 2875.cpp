#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int maxteam = min(n / 2, m);
    int remain = n - maxteam * 2 + m - maxteam;
    if (remain < k) {
        if ((k - remain) % 3 == 0 ?
            cout << maxteam - ((k - remain) / 3) :
            cout << maxteam - ((k - remain) / 3 + 1));
    }
    else
        cout << maxteam;
}