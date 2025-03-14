#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, ans, mx;
    priority_queue<int> pq;
    ans = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        pq.push(x * -1); // reverse
    }
    mx = 0;
    while (!pq.empty()) {
        if (mx == 0) {
            mx = pq.top() * -1;
            ans++;
        }
        pq.pop();
        mx--;
    }
    cout << ans;
}