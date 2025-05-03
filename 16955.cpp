#include <iostream>
using namespace std;

bool checker(char a, char b, char c, char d, char e) {
    if (a == '.' && b == 'X' && c == 'X' && d == 'X' && e == 'X')
        return true;
    if (a == 'X' && b == '.' && c == 'X' && d == 'X' && e == 'X')
        return true;
    if (a == 'X' && b == 'X' && c == '.' && d == 'X' && e == 'X')
        return true;
    if (a == 'X' && b == 'X' && c == 'X' && d == '.' && e == 'X')
        return true;
    if (a == 'X' && b == 'X' && c == 'X' && d == 'X' && e == '.')
        return true;
    return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char m[10][10];
    char c;
    bool able = false;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            m[i][j] = cin.get();
        c = cin.get(); // \n
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < 6) {
                able = checker(m[i][j], m[i + 1][j], m[i + 2][j], m[i + 3][j], m[i + 4][j]);
                if (able) {
                    cout << 1;
                    return 0;
                }
            }
            if (j < 6) {
                able = checker(m[i][j], m[i][j + 1], m[i][j + 2], m[i][j + 3], m[i][j + 4]);
                if (able) {
                    cout << 1;
                    return 0;
                }
            }
            if (i < 6 && j < 6) {
                able = checker(m[i][j], m[i + 1][j + 1], m[i + 2][j + 2], m[i + 3][j + 3], m[i + 4][j + 4]);
                if (able) {
                    cout << 1;
                    return 0;
                }
            }
            if (i > 3 && j < 6) {
                able = checker(m[i][j], m[i - 1][j + 1], m[i - 2][j + 2], m[i - 3][j + 3], m[i - 4][j + 4]);
                if (able) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
}