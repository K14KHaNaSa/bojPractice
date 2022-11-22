#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int c, k, p;
    cin >> c >> k >> p;
    int wine = 0;
    for (int i = 1; i <= c; i++) {
        wine += (k * i) + (p * i * i);
    }
    cout << wine;
}