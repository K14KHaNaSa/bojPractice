#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a;
    cin >> n;
    int h[1001];
    for (int i = 1; i < 1001; i++)
        h[i] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        h[a]++;
    }
    int one = 0;
    int two = 0;
    for (int i = 0; i < 1001; i++) {
        if (h[i] > 0) {
            if (h[i] > 1)
                two++;
            one++;
        }
    }
    cout << one + two;
}