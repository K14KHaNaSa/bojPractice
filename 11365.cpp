#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char a;
    char e[500];
    int len = 0;
    bool end = false;
    a = cin.get();
    while (!end) {
        if (a == '\n') {
            if (len == 3 && e[0] == 'E' && e[1] == 'N' && e[2] == 'D')
                end = true;
            else {
                for (int i = len - 1; i >= 0; i--)
                    cout << e[i];
                len = 0;
                cout << "\n";
                a = cin.get();
            }
        }
        else {
            e[len] = a;
            len++;
            a = cin.get();
        }
    }
}