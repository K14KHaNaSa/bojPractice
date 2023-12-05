#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, g, ns;
    cin >> n >> g;
    int rank = 1;
    for (int i = 0; i < n - 1; i++) {
        cin >> ns;
        if (ns > g)
            rank++;
    }
    cout << rank;
}