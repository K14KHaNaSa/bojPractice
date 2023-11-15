#include <iostream>
#include <queue>
using namespace std;

int day[200000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b;
    bool ok = true;
    cin >> n;
    priority_queue<pair<int, int>> need;
    priority_queue<int> yj;
    for (int i = 0; i < n; i++) {
        cin >> a;
        need.push(make_pair(a * -1, i));
    }
    for (int i = 0; i < n; i++) {
        cin >> b;
        yj.push(b * -1);
    }
    while (ok && !yj.empty()) {
        if (yj.top() * -1 >= need.top().first * -1) {
            day[need.top().second] = yj.top() * -1;
            yj.pop();
            need.pop();
        }
        else
            ok = false;
    }
    if (!ok)
        cout << -1;
    else {
        for (int i = 0; i < n; i++)
            cout << day[i] << " ";
    }
}