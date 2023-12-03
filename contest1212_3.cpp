#include <iostream>
using namespace std;

char s[500000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char d;
    int n, k;
    cin >> n >> k;
    d = cin.get(); //\n dummy
    for (int i = 0; i < n; i++) {
        s[i] = cin.get();
    }
    for (int i = k - 1; i < n; i++)
        cout << s[i];
    if ((n - k) % 2 == 0) {
        for (int i = k - 2; i >= 0; i--)
            cout << s[i];
    }
    else {
        for (int i = 0; i < k - 1; i++)
            cout << s[i];
    }
}