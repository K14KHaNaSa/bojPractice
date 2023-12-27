#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    char c;
    int abc[26];
    int def[26];
    cin >> n;
    c = cin.get();
    while (n--) {
        for (int i = 0; i < 26; i++) {
            abc[i] = 0;
            def[i] = 0;
        }
        while (c != ' ') {
            c = cin.get();
            abc[c - 'a']++;
        }
        while (c != '\n') {
            c = cin.get();
            def[c - 'a']++;
        }
        bool p = true;
        for (int i = 0; i < 26; i++) {
            if (abc[i] != def[i])
                p = false;
        }
        if (p ? cout << "Possible\n" : cout << "Impossible\n");
    }
}