#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char s;
    s = cin.get();
    char pre = s;
    s = cin.get();
    while (s != EOF) {
        if (pre == '(' && s == '(')
            cout << "(";
        else if (pre == '(' && s == ')') {
            cout << "(1";
        }
        else if (pre == ')' && s == '(') {
            cout << ")+";
        }
        else if (pre == ')' && s == ')')
            cout << ")";
        pre = s;
        s = cin.get();
    }
    cout << ")";
}