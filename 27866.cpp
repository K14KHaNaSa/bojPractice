#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << s.substr(0, 1) << s.substr(s.size() - 1, 1) << "\n";
    }
}