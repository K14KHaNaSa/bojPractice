#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int ans = 0;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s.substr(0, 1) == "C")
            ans++;
    }
    cout << ans;
}