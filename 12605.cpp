#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack<string> l;
    string s;
    char c;
    int n;
    cin >> n;
    int t = 0;
    c = cin.get();
    while (t < n) {
        cin >> s;
        l.push(s);
        c = cin.get();
        if (c == '\n') {
            cout << "Case #" << t + 1 << ":";
            while (!l.empty()) {
                cout << ' ' << l.top();
                l.pop();
            }
            cout << '\n';
            t++;
        }
    }
}