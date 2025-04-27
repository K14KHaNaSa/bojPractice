#include <iostream>
#include <stack>
using namespace std;

bool out[200001];
stack<int> stk;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, e;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        out[i] = false;
    while (m--) {
        cin >> e;
        stk.push(e);
    }
    while (!stk.empty()) {
        if (!out[stk.top()]) {
            cout << stk.top() << '\n';
            out[stk.top()] = true;
        }
        stk.pop();
    }
    for (int i = 1; i <= n; i++) {
        if (!out[i])
            cout << i << '\n';
    }
}