#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << (h1 + h2) * 2 + max(w1, w2) * 2 + 4;
}