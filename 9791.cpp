#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    int combo;
    string now;
    cin >> s;
    while (s != "0") {
        now = s.substr(0, 1);
        combo = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s.substr(i, 1) != now) {
                cout << combo << now;
                combo = 1;
                now = s.substr(i, 1);
            }
            else
                combo++;
        }
        cout << combo << now << '\n';
        cin >> s;
    }
}