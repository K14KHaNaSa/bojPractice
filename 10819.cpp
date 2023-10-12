#include <iostream>
using namespace std;

int n, ans;
int a[8];
int mix[8];
bool no[8];

void bt(int arr_no) {
    if (arr_no == n) {
        int now = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[mix[i]] > a[mix[i + 1]])
                now += a[mix[i]] - a[mix[i + 1]];
            else
                now += a[mix[i + 1]] - a[mix[i]];
        }
        ans = max(ans, now);
    }
    else {
        for (int i = 0; i < n; i++) {
            if (!no[i]) {
                no[i] = true;
                mix[arr_no] = i;
                bt(arr_no + 1);
                no[i] = false;
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ans = -1000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        no[i] = false;
    }
    bt(0);
    cout << ans;
}