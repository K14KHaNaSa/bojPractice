#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int pre, ele;
    cin >> pre;
    int now = 1;
    int combo = 1;
    n--;
    while (n--) {
        cin >> ele;
        if (ele > pre)
            now++;
        else {
            combo = max(combo, now);
            now = 1;
        }
        pre = ele;
    }
    cout << max(combo, now);
}