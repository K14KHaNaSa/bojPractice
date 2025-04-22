#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    stack<int> ans;
    string b, ss;
    int o, i;
    cin >> b;
    if (b == "0") {
        cout << 0;
        return 0;
    }
    i = b.length();
    while (i > 2) {
        o = 0;
        ss = b.substr(i - 3, 3);
        if (ss.substr(0, 1) == "1")
            o += 4;
        if (ss.substr(1, 1) == "1")
            o += 2;
        if (ss.substr(2, 1) == "1")
            o++;
        ans.push(o);
        i -= 3;
    }
    o = 0;
    if (i == 1)
        o++;
    else if (i > 1) {
        if (b.substr(0, 1) == "1")
            o += 2;
        if (b.substr(1, 1) == "1")
            o++;
    }
    if (i > 0)
        cout << o;
    while (!ans.empty()) {
        cout << ans.top();
        ans.pop();
    }
}