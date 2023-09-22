#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    string oi;
    while (n--) {
        cin >> oi;
        bool emo = false;
        for (int i = 0; i < oi.size() - 1; i++) {
            if (oi.substr(i, 2) == "01" || oi.substr(i, 2) == "OI")
                emo = true;
        }
        if (emo)
            ans++;
    }
    cout << ans;
}