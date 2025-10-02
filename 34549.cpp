#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m;
    cin >> m;
    int i = 1;
    bool asc = true;
    while (true) {
        cout << i << ' ';
        if (i == m)
            asc = false;
        asc ? i++ : i--;
        if (i < 1)
            return 0;
    }    
}