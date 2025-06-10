#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int s, c, o, n;
    cin >> s >> c >> o >> n;
    s += n;
    c += o * 2;
    cout << min(s / 3, c / 6);
}