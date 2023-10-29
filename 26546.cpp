#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, j;
    string s;
    cin >> n;
    while (n--) {
        cin >> s >> i >> j;
        cout << s.substr(0, i) << s.substr(j, s.length() - j) << "\n";
    }
}