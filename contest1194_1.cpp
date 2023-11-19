#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s;
    s = cin.get();
    bool k = false;
    bool o = false;
    bool r = false;
    bool e = false;
    bool a = false;
    bool first_k = true;
    int ans = 0;
    while (s != EOF) {
        if (s == 'K' && first_k) {
            k = true;
            first_k = false;
            ans++;
        }
        else if (s == 'K' && a) {
            k = true;
            a = false;
            ans++;
        }
        else if (s == 'O' && k) {
            o = true;
            k = false;
            ans++;
        }
        else if (s == 'R' && o) {
            r = true;
            o = false;
            ans++;
        }
        else if (s == 'E' && r) {
            e = true;
            r = false;
            ans++;
        }
        else if (s == 'A' && e) {
            a = true;
            e = false;
            ans++;
        }
        s = cin.get();
    }
    cout << ans;
}