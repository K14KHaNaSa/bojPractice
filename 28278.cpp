#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, o, x;
    cin >> n;
    stack<int> stk;
    while (n--) {
        cin >> o;
        if (o == 1) {
            cin >> x;
            stk.push(x);
        }
        else if (o == 3) {
            cout << stk.size() << "\n";
        }
        else if (o == 4) {
            if (stk.empty()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        else {
            if (stk.empty()) {
                cout << "-1\n";
            }
            else {
                cout << stk.top() << "\n";
                if (o == 2) {
                    stk.pop();
                }
            }
        }
    }
}