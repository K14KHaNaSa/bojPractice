#include <iostream>
using namespace std;

int gn[10001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, g;
    cin >> n;
    while (n--) {
        cin >> g;
        for (int i = 0; i < g; i++)
            cin >> gn[i];
        if (g < 4)
            cout << "2\n";
        else if (gn[2] - gn[0] == gn[3] - gn[2])
            cout << "2\n";
        else {
            for (int i = 1; i < g - 1; i++) {
                if (gn[i] - gn[i - 1] == gn[i + 1] - gn[i]) continue;
                if (gn[i] - gn[i - 1] == gn[i + 2] - gn[i]) {
                    cout << i + 2 << '\n';
                    break;
                }
            }
        }
    }
}