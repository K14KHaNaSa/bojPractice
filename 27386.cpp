#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int l[26];
    char s;
    int ls = 0;
    for (int i = 0; i < 26; i++)
        l[i] = 0;
    s = cin.get();
    while (ls < 2 || s != EOF) {
        if (s == '\n')
            ls++;
        else
            l[int(s - 'a')]++;
        s = cin.get();
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < l[i]; j++)
            cout << char(i + 'a');
    }
}