#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a, b, ax, ay, bx, by, sum;
    cin >> a >> b;
    ax = (a - 1) / 4;
    ay = (a - 1) % 4;
    bx = (b - 1) / 4;
    by = (b - 1) % 4;

    if (ax > bx) {
        sum = ax - bx;
    }
    else {
        sum = bx - ax;
    }

    if (ay > by) {
        sum = sum + (ay - by);
    }
    else {
        sum = sum + (by - ay);
    }
    cout << sum;
}