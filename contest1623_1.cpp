#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, y, i;
    string s;
    vector<pair<int, string>> scu;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s >> y;
        scu.push_back(make_pair(y, s));
    }
    sort(scu.rbegin(), scu.rend());
    cout << scu[0].second;
}