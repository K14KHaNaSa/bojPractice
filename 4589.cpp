#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c;
    cin >> n;
    cout << "Gnomes:\n";
    while (n--) {
        cin >> a >> b >> c;
        if (a > b && b > c || c > b && b > a) {
            cout << "Ordered\n";
        }
        else {
            cout << "Unordered\n";
        }
    }
}