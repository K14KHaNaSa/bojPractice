#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<pair<string, int>> c;
    int t, n, i, ans;
    cin >> t;
    string cn, cc;
    bool exist;
    while (t--) {
        c.clear();
        cin >> n;
        while (n--) {
            cin >> cn >> cc;
            exist = false;
            for (i = 0; i < c.size(); i++) {
                if (c[i].first == cc) {
                    c[i].second++;
                    exist = true;
                    break;
                }
            }
            if (!exist)
                c.push_back(make_pair(cc, 1));
        }
        ans = 1;
        for (i = 0; i < c.size(); i++)
            ans *= (c[i].second + 1);
        cout << ans - 1 << '\n';
    }
}