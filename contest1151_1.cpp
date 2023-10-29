#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char c;
    string ans;
    for (int i = 0; i < 15 * 15; i++) {
        cin >> c;
        if (c == 'w')
            ans = "chunbae";
        if (c == 'b')
            ans = "nabi";
        if (c == 'g')
            ans = "yeongcheol";
    }
    cout << ans;
}