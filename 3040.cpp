#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sm[9];
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> sm[i];
        sum += sm[i];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - sm[i] - sm[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j)
                        cout << sm[k] << "\n";
                }
            }
        }
    }
}