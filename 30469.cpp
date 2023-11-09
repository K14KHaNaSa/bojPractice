#include <iostream>
using namespace std;

//int p[21] = { 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
int a, b, n;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b >> n;
    if ((b / 10) % 2 != 0 && (b / 10) != 5) {
        cout << a;
        if (a % 10 == 9)
            cout << 7;
        else
            cout << 1;
        for (int i = 0; i < n - 5; i++)
            cout << 1;
        cout << b;
    }
    else
        cout << "-1";
}