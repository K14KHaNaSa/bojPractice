#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int n, w, h, d;
    vector<int> whd(3);
    cin >> n;
    w = 1000;
    h = 1000;
    d = 1000;
    while (n--) {
        cin >> whd[0] >> whd[1] >> whd[2];
        sort(whd.begin(), whd.end());
        w = min(w, whd[0]);
        h = min(h, whd[1]);
        d = min(d, whd[2]);
    }
    cout << w * h * d;
}