#include <iostream>
using namespace std;

bool alpha[26];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    char s, ent;
    cin >> n;
    s = cin.get();
    while (n--) {
        for (int i = 0; i < 26; i++) {
            alpha[i] = false;
        }
        s = cin.get();
        while (s != '\n') {
            alpha[int(s) - 65] = true;
            s = cin.get();
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (!alpha[i]) {
                ans += 65 + i;
            }
        }
        cout << ans << "\n";
    }
}