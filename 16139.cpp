#include <iostream>
using namespace std;
int s[200001][26]; // appeared count // { i-th , each alphabet }

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char az; // a = 97 / z = 122
    for (int i = 0; i < 26; i++) {
        s[0][i] = 0;
    }
    az = cin.get();
    int indexcount = 1;
    char a;
    int q, l, r;
    while (az != '\n') {
        for (int i = 0; i < 26; i++) {
            s[indexcount][i] = s[indexcount - 1][i];
        }
        s[indexcount][int(az) - 97] += 1;
        indexcount++;
        az = cin.get();
    }
    cin >> q;
    while (q--) {
        cin >> a >> l >> r;
        cout << s[r + 1][int(a) - 97] - s[l][int(a) - 97] << '\n';
    }
}