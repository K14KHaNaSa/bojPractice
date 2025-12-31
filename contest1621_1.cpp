#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
        (i % 3 == 2) ? cout << 'H' : cout << 'S';
}