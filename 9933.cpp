#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, j;
    string s[100];
    string o;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> s[i];
    for (i = 0; i < n; i++) {
        o = s[i];
        reverse(s[i].begin(), s[i].end());
        for (j = i + 1; j < n; j++) {
            if (s[i] == s[j]) {
                cout << s[j].length() << ' ' << o.substr(o.length() / 2, 1);
                return 0;
            }
        }
        if (s[i] == o) {
            cout << o.length() << ' ' << o.substr(o.length() / 2, 1);
            return 0;
        }
    }
}