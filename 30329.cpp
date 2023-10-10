#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.size() - 3; i++) {
        if (s.substr(i, 4) == "kick") {
            ans++;
            i += 2;
        }
    }
    cout << ans;
}