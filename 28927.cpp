#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, e, f;
    cin >> t >> e >> f;
    int mx = t * 3 + e * 20 + f * 120;
    cin >> t >> e >> f;
    int ml = t * 3 + e * 20 + f * 120;
    if (mx > ml)
        cout << "Max";
    else if (mx < ml)
        cout << "Mel";
    else
        cout << "Draw";
}