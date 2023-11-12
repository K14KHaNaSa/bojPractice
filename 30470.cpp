#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, a, b, same_len, magic, changed, ans;
    cin >> n;
    stack<pair<long long int, long long int>> stair;
    while (n--) {
        cin >> a >> b;
        if (a == 1) {
            if (stair.empty())
                stair.push(make_pair(b, 1));
            else if (stair.top().first == b) {
                same_len = stair.top().second + 1;
                stair.pop();
                stair.push(make_pair(b, same_len));
            }
            else
                stair.push(make_pair(b, 1));
        }
        else if (!stair.empty()) {
            magic = max(stair.top().first - b, b - b); // (lli,0<=int)
            changed = 0;
            while (!stair.empty() && stair.top().first > magic) {
                changed += stair.top().second;
                stair.pop();
            }
            if (magic > 0)
                stair.push(make_pair(magic, changed));
        }
    }
    if (stair.empty())
        cout << 0;
    else {
        ans = 0;
        while (!stair.empty()) {
            ans += stair.top().first * stair.top().second;
            stair.pop();
        }
        cout << ans;
    }
}