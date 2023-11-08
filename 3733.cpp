#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, s;
    while (cin >> n >> s) {
        cout << s / (n + 1) << "\n";
    }
}