#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    for (int i = 0; i < k * 3; i++) {
        for (int j = 0; j < k * 3; j++) {
            if (i / k != 1) {
                if (i / k == 0 && j / k == 1)
                    cout << 'x';
                else if (i / k == 2 && j / k == 1)
                    cout << ' ';
                else
                    cout << '*';
            }
            else 
                (j / k < 1) ? cout << ' ' : cout << 'x';
        }
        cout << '\n';
    }
}