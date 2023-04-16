#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, m, k, t, r;
    long long int answer = 0;
    bool broken = false;
    cin >> n >> m >> k;
    int i = 0;
    while (m--) {
        cin >> t >> r;
        i++;
        k -= r;
        if (k < 0 && !broken) {
            answer = i;
            broken = true;
        }
    }
    if (!broken) {
        cout << "-1";
    }
    else {
        cout << answer << " 1";
    }
}
