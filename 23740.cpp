#include <iostream>
#include <queue>
using namespace std;

int n, s, e, c;
priority_queue<pair<pair<int, int>, int>> b; // ((S, E), C)
queue<pair<pair<int, int>, int>> ans;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> s >> e >> c;
        b.push(make_pair(make_pair(s * -1, e * -1), c));
    }
    s = b.top().first.first * -1;
    e = b.top().first.second * -1;
    c = b.top().second;
    b.pop();
    while (!b.empty()) {
        if (b.top().first.first * -1 > e) {
            ans.push(make_pair(make_pair(s, e), c));
            s = b.top().first.first * -1;
            e = b.top().first.second * -1;
            c = b.top().second;
        }
        else {
            e = max(e, b.top().first.second * -1);
            c = min(c, b.top().second);
        }
        b.pop();
    }
    ans.push(make_pair(make_pair(s, e), c));
    cout << ans.size() << "\n";
    while (!ans.empty()) {
        cout << ans.front().first.first << " " << ans.front().first.second << " " << ans.front().second << "\n";
        ans.pop();
    }
}