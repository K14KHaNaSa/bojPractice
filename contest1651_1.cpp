#include <iostream>
using namespace std;

int ans = 5;

int check_str(string s) {
    int change = 0;
    if (s.substr(0, 1) != "e")
        change++;
    if (s.substr(1, 1) != "a")
        change++;
    if (s.substr(2, 1) != "g")
        change++;
    if (s.substr(3, 1) != "l")
        change++;
    if (s.substr(4, 1) != "e")
        change++;
    return change;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    ans = 5;
    cin >> n >> s;
    for (int i = 0; i < n - 4; i++)
        ans = min(ans, check_str(s.substr(i, 5)));
    cout << ans;
}