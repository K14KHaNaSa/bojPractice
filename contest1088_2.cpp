#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> e(n);
    vector<int> o(m);
    for (int i = 0; i < n; i++)
        cin >> e[i];
    for (int i = 0; i < m; i++)
        cin >> o[i];
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    int eans = 1;
    int oans = 1;
    int epre = e[0];
    int opre = o[0];
    for (int i = 1; i < n; i++) {
        if (e[i] >= epre + 100) {
            eans++;
            epre = e[i];
        }
    }
    for (int i = 1; i < m; i++) {
        if (o[i] >= opre + 360) {
            oans++;
            opre = o[i];
        }
    }
    cout << eans << " " << oans;
}