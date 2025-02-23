#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char temp[3][3] = { {'Z', 'N', 'A'},
        {'N', 'A', 'Z'},
        {'A', 'Z', 'N'} };
    int n, i, j;
    cin >> n;
    for (i = 0; i < n * 3; i++) {
        for (j = 0; j < n * 3; j++)
            cout << temp[i / n][j / n];
        cout << '\n';
    }
}