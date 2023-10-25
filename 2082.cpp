#include <iostream>
using namespace std;

char dc[5][15];

bool zero(int left) {
    if (dc[2][left + 1] == '#') {
        return false;
    }
    else {
        cout << "0";
        return true;
    }
}

bool two(int left) {
    if (dc[1][left] == '#' || dc[3][left + 2] == '#') {
        return false;
    }
    else {
        cout << "2";
        return true;
    }
}

bool three(int left) {
    if (dc[1][left] == '#' || dc[3][left] == '#') {
        return false;
    }
    else {
        cout << "3";
        return true;
    }
}

bool four(int left) {
    if (dc[0][left + 1] == '#' || dc[3][left] == '#' || dc[4][left] == '#' || dc[4][left + 1] == '#') {
        return false;
    }
    else {
        cout << "4";
        return true;
    }
}

bool five(int left) {
    if (dc[1][left + 2] == '#' || dc[3][left] == '#') {
        return false;
    }
    else {
        cout << "5";
        return true;
    }
}

bool six(int left) {
    if (dc[1][left + 2] == '#') {
        return false;
    }
    else {
        cout << "6";
        return true;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char n;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 15; j++) {
            n = cin.get();
            dc[i][j] = n;
        }
        n = cin.get();
    }
    for (int k = 0; k < 4; k++) {
        bool printed = false;
        printed = zero(k * 4);
        if (!printed)
            printed = two(k * 4);
        if (!printed)
            printed = three(k * 4);
        if (!printed)
            printed = four(k * 4);
        if (!printed)
            printed = five(k * 4);
        if (!printed)
            printed = six(k * 4);
        if (!printed)
            cout << "8";
        if (k == 1)
            cout << ":";
    }
}