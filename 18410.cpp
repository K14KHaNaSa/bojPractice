#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    priority_queue<int> ans;
    cin >> a >> b;
    a += b;
    while (a--) {
        cin >> b;
        ans.push(b * -1);
    }
    while (!ans.empty()) {
        cout << ans.top() * -1 << "\n";
        ans.pop();
    }
}