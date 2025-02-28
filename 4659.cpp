#include <iostream>
using namespace std;

bool check_vowel(string c) {
    if (c == "a" || c == "e" || c == "i" || c == "o" || c == "u")
        return true;
    else
        return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    bool v, t, d;
    int trp, i, j;
    cin >> s;
    while (s != "end") {
        // check vowel
        v = false;
        for (i = 0; i < s.length(); i++) {
            if (check_vowel(s.substr(i, 1)))
                v = true;
        }
        // check 3 combo
        t = true;
        if (s.length() > 2) {
            for (i = 0; i < s.length() - 2; i++) {
                trp = 0;
                for (j = 0; j < 3; j++) {
                    if (check_vowel(s.substr(i + j, 1)))
                        trp++;
                }
                if (trp == 0 || trp == 3) {
                    t = false;
                    break;
                }
            }
        }
        // check same chars
        d = true;
        if (s.length() > 1) {
            for (i = 0; i < s.length() - 1; i++) {
                if (s.substr(i, 1) == s.substr(i + 1, 1)) {
                    if (s.substr(i, 1) == "e" ||
                        s.substr(i, 1) == "o")
                        continue;
                    else {
                        d = false;
                        break;
                    }
                }
            }
        }
        cout << "<" << s << "> is ";
        if (!((v && t) && d))
            cout << "not ";
        cout << "acceptable.\n";
        cin >> s;
    }
}