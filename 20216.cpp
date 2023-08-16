#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char st1, st2;
    bool q = false;
    while (!q) {
        st1 = cin.get();
        st2 = cin.get();
        while (st2 != '\n') {
            st1 = st2;
            st2 = cin.get();
        }
        if (st1 == '.') {
            cout << "*Nod*" << endl;
        }
        else if (st1 == '?') {
            cout << "Quack!" << endl;
        }
        else if (st1 == '!') {
            q = true;
        }
    }
}