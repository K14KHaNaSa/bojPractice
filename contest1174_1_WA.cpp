#include <iostream>
using namespace std;

char song[100];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char s;
    s = cin.get(); // \n
    for (int i = 0; i < n; i++) {
        s = cin.get();
        song[i] = s;
    }
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (song[i] == song[0]) {
            bool ok = true;
            for (int j = 1; j < n - i; j++) {
                if (song[i + j] != song[j])
                    ok = false;
            }
            if (ok)
                ans++;
        }
    }
    cout << ans;
}