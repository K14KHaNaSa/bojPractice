#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << char((n - 1) % 8 + 'a') << (n - 1) / 8 + 1;
}