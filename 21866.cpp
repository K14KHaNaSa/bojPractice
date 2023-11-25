#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sc;
    int d = 0;
    bool h = false;
    for (int j = 1; j < 5; j++) {
        for (int i = 0; i < 2; i++) {
            cin >> sc;
            if (sc > j * 100)
                h = true;
            d += sc;
        }
    }
    cin >> sc;
    if (sc > 500)
        h = true;
    d += sc;
    if (h)
        cout << "hacker";
    else if (d < 100)
        cout << "none";
    else
        cout << "draw";
}