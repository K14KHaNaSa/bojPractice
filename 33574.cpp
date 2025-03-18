#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q, o, x, t, i, tmp;
    vector<int> s;
    cin >> q;
    while (q--) {
        cin >> o >> x;
        if (o > 1) {
            cin >> t;
            s.push_back(t);
            for (i = s.size() - 2; i >= x; i--) {
                tmp = s[i + 1];
                s[i + 1] = s[i];
                s[i] = tmp;
            }
        }
        else {
            if (x < 2)
                sort(s.begin(), s.end());
            else
                sort(s.rbegin(), s.rend());
        }
    }
    cout << s.size() << '\n';
    for (i = 0; i < s.size(); i++)
        cout << s[i] << ' ';
}