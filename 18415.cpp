#include <iostream>
using namespace std;

char s[100];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    char a;
    cin >> n;
    a = cin.get();
    for (i = 0; i < n; i++) {
        a = cin.get();
        s[i] = a;
    }
    for (i = 0; i < n; i++) {
        if (i < n - 2) {
            if (s[i] == 'j' && s[i + 1] == 'o' && s[i + 2] == 'i') {
                cout << "JOI";
                i += 2;
            }
            else
                cout << s[i];
        }
        else
            cout << s[i];
    }
}