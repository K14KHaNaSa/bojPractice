#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    priority_queue<pair<pair<int, int>, string>> boj;
    int n, a;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> name;
        boj.push(make_pair(make_pair(a * -1, n - i), name));
    }
    while (!boj.empty()) {
        cout << boj.top().first.first * -1 << " " << boj.top().second << "\n";
        boj.pop();
    }
}