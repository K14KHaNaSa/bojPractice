#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    int ab[100][2];
    bool ans = true;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> ab[i][0] >> ab[i][1];
    for (i = 1; i < n; i++) {
        if (ab[i - 1][0] <= ab[i][0] && ab[i - 1][1] <= ab[i][1]) continue;
        else {
            ans = false;
            break;
        }
    }
    ans ? cout << "yes" : cout << "no";
}