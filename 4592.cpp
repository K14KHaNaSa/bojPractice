#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, pre, c;
    cin >> n;
    while (n > 0) {
        n--;
        cin >> pre;
        cout << pre << " ";
        while (n--) {
            cin >> c;
            if (c != pre) {
                cout << c << " ";
                pre = c;
            }
        }
        cout << "$\n";
        cin >> n;
    }
}