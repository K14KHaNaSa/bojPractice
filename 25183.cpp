#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char lot; // A = 65 / z = 90
    lot = cin.get(); // enter dummy
    lot = cin.get();
    int prechar = int(lot);
    int combo = 1;
    bool answer = false;
    for (int i = 1; i < n; i++) {
        lot = cin.get();
        if (int(lot) > 65) {
            if (int(lot) < 90) {
                if (prechar - int(lot) == 1 || int(lot) - prechar == 1) {
                    combo++;
                }
                else {
                    combo = 1;
                }
            }
            else {
                if (prechar == 89) {
                    combo++;
                }
                else {
                    combo = 1;
                }
            }
        }
        else {
            if (prechar == 66) {
                combo++;
            }
            else {
                combo = 1;
            }
        }
        prechar = int(lot);
        if (combo > 4) {
            answer = true;
        }
    }
    if (answer) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
