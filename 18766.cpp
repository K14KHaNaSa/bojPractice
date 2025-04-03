#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, i;
    string s;
    bool c;
    vector<string> b;
    vector<string> d;
    cin >> t;
    while (t--) {
        cin >> n;
        b.clear();
        d.clear();
        c = false;
        for (i = 0; i < n; i++) {
            cin >> s;
            b.push_back(s);
        }
        for (i = 0; i < n; i++) {
            cin >> s;
            d.push_back(s);
        }
        sort(b.begin(), b.end());
        sort(d.begin(), d.end());
        for (i = 0; i < n; i++) {
            if (b[i] != d[i]) {
                c = true;
                break;
            }
        }
        (c) ? cout << "CHEATER\n" : cout << "NOT CHEATER\n";
    }
}