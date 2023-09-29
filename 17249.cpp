#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char a;
    bool left = true;
    int l = 0;
    int r = 0;
    a = cin.get();
    while (a != EOF) {
        if (a == '@') {
            if (left)
                l++;
            else
                r++;
        }
        else if (a == '(')
            left = false;
        a = cin.get();
    }
    cout << l << " " << r;
}