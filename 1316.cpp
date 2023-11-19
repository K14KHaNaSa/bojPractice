#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    char c;
    char pre;
    int ans = 0;
    bool group_s = false;
    bool alpha[26];
    cin >> n;
    while (n >= 0) {
        c = cin.get(); // \n dummy
        if (c == '\n') {
            n--;
            for (int i = 0; i < 26; i++)
                alpha[i] = false;
            if (group_s)
                ans++;
            group_s = true;
            pre = '.';
        }
        else {
            if (pre != c) {
                if (alpha[c - 'a'])
                    group_s = false;
                alpha[c - 'a'] = true;
                pre = c;
            }
        }
    }
    cout << ans;
}