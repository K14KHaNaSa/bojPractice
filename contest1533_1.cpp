#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, ai, tmp;
    stack<int> a;
    cin >> n;
    /*
    while (n--) {
        cin >> ai; // [ai]
        if (!a.empty()) {
            if (a.top() + ai == 3) // 1 + [2] or 2 + [1]
                a.pop();
            else if (a.size() > 1) {
                tmp = a.top();
                a.pop();
                if (a.top() + tmp + ai == 3) // 1 + 1 + [1]
                    a.pop();
                else { // 2 + 2 + [2]
                    a.push(tmp);
                    a.push(ai);
                }
            }
            else // { 1 + [1] } or { 2 + [2] }
                a.push(ai);
        }
        else // { [1] } or { [2] }
            a.push(ai);
    }
    (a.empty()) ? cout << "Yes" : cout << "No";
    */
    int one, two;
    one = 0;
    two = 0;
    while (n--) {
        cin >> ai;
        if (ai == 1)
            one++;
        else
            two++;
    }
    if (two > one)
        cout << "No";
    else {
        one -= two;
        (one % 3 == 0) ? cout << "Yes" : cout << "No";
    }
}