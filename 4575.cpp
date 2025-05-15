#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s[1000];
    char c;
    int len;
    int dic[26];

    while (true) {
        len = 0;
        for (int i = 0; i < 26; i++)
            dic[i] = 0;
        c = cin.get();
        while (c != '\n') {
            s[len] = c;
            if (c >= 'A' && c <= 'Z')
                dic[c - 'A']++;
            len++;
            c = cin.get();
        }
        if (len == 3 && s[0] == 'E' && s[1] == 'N' && s[2] == 'D')
            return 0;
        else {
            bool ok = true;
            for (int i = 0; i < 26; i++) {
                if (dic[i] > 1) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                for (int i = 0; i < len; i++)
                    cout << s[i];
                cout << '\n';
            }
        }
    }
}