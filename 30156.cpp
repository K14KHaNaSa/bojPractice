#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    int a, b;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        a = 0;
        b = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.substr(i, 1) == "a")
                a++;
            else
                b++;
        }
        cout << min(a, b) << '\n';
    }
}