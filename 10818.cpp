#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    cin >> n;
    int min = 10000001;
    int max = -10000001;
    while (n--) {
        cin >> i;
        if (i < min)
            min = i;
        if (i > max)
            max = i;
    }
    cout << min << ' ' << max;
}