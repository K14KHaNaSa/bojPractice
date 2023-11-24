#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int sq[101];
    sq[1] = 1;
    for (int i = 2; i <= 100; i++)
        sq[i] = sq[i - 1] + i * i;
    int n;
    cin >> n;
    while (n > 0) {
        cout << sq[n] << "\n";
        cin >> n;
    }
}