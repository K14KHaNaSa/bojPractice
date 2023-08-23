#include <iostream>
using namespace std;

char step[2][2];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char d, n;
    d = cin.get();
    for (int i = 0; i < 2; i++) {
        n = cin.get();
        for (int j = 0; j < 2; j++) {
            n = cin.get();
            step[i][j] = n;
        }
    }
    char w = step[0][0];
    char x = step[0][1];
    char y = step[1][0];
    char z = step[1][1];
    if (d == 'E') {
        if (w == 'O' && x == '.' && y == '.' && z == 'P') {
            cout << "T";
        }
        else if (w == '.' && x == 'P' && y == 'I' && z == '.') {
            cout << "F";
        }
        else if (w == '.' && x == 'P' && y == 'O' && z == '.') {
            cout << "Lz";
        }
        else {
            cout << "?";
        }
    }
    else if (d == 'W') {
        if (w == 'P' && x == '.' && y == '.' && z == 'O') {
            cout << "T";
        }
        else if (w == '.' && x == 'I' && y == 'P' && z == '.') {
            cout << "F";
        }
        else if (w == '.' && x == 'O' && y == 'P' && z == '.') {
            cout << "Lz";
        }
        else {
            cout << "?";
        }
    }
    else if (d == 'S') {
        if (w == '.' && x == 'O' && y == 'P' && z == '.') {
            cout << "T";
        }
        else if (w == 'I' && x == '.' && y == '.' && z == 'P') {
            cout << "F";
        }
        else if (w == 'O' && x == '.' && y == '.' && z == 'P') {
            cout << "Lz";
        }
        else {
            cout << "?";
        }
    }
    else if (d == 'N') {
        if (w == '.' && x == 'P' && y == 'O' && z == '.') {
            cout << "T";
        }
        else if (w == 'P' && x == '.' && y == '.' && z == 'I') {
            cout << "F";
        }
        else if (w == 'P' && x == '.' && y == '.' && z == 'O') {
            cout << "Lz";
        }
        else {
            cout << "?";
        }
    }
}