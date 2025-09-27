#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int alphabet[26];
    char c = '.';
    for (int i = 0; i < 26; i++)
        alphabet[i] = 0;
    c = cin.get();
    bool ok = true;
    while (c != '\n') { // string S
        alphabet[c - 'A']++;
        c = cin.get();
    }
    c = cin.get();
    while (c != '\n') { // string T
        alphabet[c - 'A']--;
        if (alphabet[c - 'A'] < 0)
            ok = false;
        c = cin.get();
    }
    ok ? cout << "OK" : cout << "NEED FIX";
}