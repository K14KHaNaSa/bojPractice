#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, jj;
    int c[1000];
    string d[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d[i] >> c[i];
        if (d[i] == "jinju")
            jj = c[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] > jj)
            ans++;
    }
    cout << jj << "\n" << ans;
}