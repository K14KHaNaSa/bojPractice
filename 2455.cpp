#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int max = 0, now = 0, inp, out;
    for (int i = 0; i < 4; i++) {
        cin >> out >> inp;
        now = now + inp - out;
        if (now > max) {
            max = now;
        }
    }
    cout << max;
}