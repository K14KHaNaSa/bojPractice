#include <iostream>
using namespace std;

int ctoi(char c) {
    if (c == '1')
        return 1;
    if (c == '2')
        return 2;
    if (c == '3')
        return 3;
    if (c == '4')
        return 4;
    if (c == '5')
        return 5;
    if (c == '6')
        return 6;
    if (c == '7')
        return 7;
    if (c == '8')
        return 8;
    if (c == '9')
        return 9;
    if (c == '!')
        return 10;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, x, sum;
    char c;
    cin >> n;
    while (n--) {
        cin >> x;
        sum = 0;
        for (int i = 0; i < 2 * x + 1; i++) {
            cin >> c;
            if (i % 2 == 0)
                sum += ctoi(c);
        }
        (sum > 9) ? cout << "!\n" : cout << sum << '\n';
    }
}