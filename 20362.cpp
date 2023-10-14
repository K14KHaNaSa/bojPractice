#include <iostream>
using namespace std;

string chat[1000][2];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s, ch;
    int n;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> chat[i][0] >> chat[i][1];
        if (chat[i][0] == s) {
            ch = chat[i][1];
        }
    }
    bool omg = false;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (omg && chat[i][1] == ch)
            ans++;
        else if (chat[i][0] == s)
            omg = true;
    }
    cout << ans;
}