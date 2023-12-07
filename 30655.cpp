#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, c;
    bool find[1001];
    cin >> n >> m;
    while (n != 0 && m != 0) {
        for (int i = 1; i <= n; i++) {
            find[i] = false;
        }
        find[m] = true;
        for (int i = 0; i < n - 2; i++) {
            cin >> c;
            find[c] = true;
        }
        for (int i = 1; i <= n; i++) {
            if (!find[i])
                cout << i << "\n";
        }
        cin >> n >> m;
    }
}