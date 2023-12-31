#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a[26];
    char c;
    for (int i = 0; i < 26; i++)
        a[i] = 0;
    c = cin.get();
    while (c != EOF) {
        if (c >= 'a' && c <= 'z')
            a[c - 'a']++;
        if (c >= 'A' && c <= 'Z')
            a[c - 'A']++;
        c = cin.get();
    }
    for (int i = 0; i < 26; i++) {
        cout << char(i + 'A') << " | ";
        for (int j = 0; j < a[i]; j++)
            cout << "*";
        cout << "\n";
    }
}