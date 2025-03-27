#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d;
    bool seven;
    bool ans = true;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        seven = false;
        for (int j = 0; j < n; j++) {
            cin >> d;
            if (d == 7)
                seven = true;
        }
        if (!seven)
            ans = false;
    }
    ans ? cout << 777 : cout << 0;
}