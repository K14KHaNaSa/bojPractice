#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ans;
    char c;
    char before[26];
    char after[26];
    cin >> n;
    c = cin.get();
    for (int i = 1; i <= n; i++) {
        c = cin.get();
        for (int j = 0; j < 26; j++) {
            before[j] = 0;
            after[j] = 0;
        }
        while (c != '\n') {
            before[c - 'a']++;
            c = cin.get();
        }
        c = cin.get();
        while (c != '\n') {
            after[c - 'a']++;
            c = cin.get();
        }
        ans = 0;
        for (int j = 0; j < 26; j++)
            ans += max(before[j] - after[j], after[j] - before[j]);
        cout << "Case #" << i << ": " << ans << "\n";
    }
}