#include <iostream>
using namespace std;

int map[19][19];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++)
            cin >> map[i][j];
    }
    int winner = 0; // 0 : not yet / 1 : b / 2 : w
    int u, v;
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (winner == 0 && map[i][j] != 0) {
                bool ok = false;
                //vertical
                if (i < 15) {
                    ok = true;
                    for (int k = 0; k < 5; k++) {
                        if (map[i][j] != map[i + k][j])
                            ok = false;
                    }
                    if (ok) {
                        // check 6mok
                        if (i > 0) {
                            if (map[i][j] == map[i - 1][j])
                                ok = false;
                        }
                        if (i < 18) {
                            if (map[i][j] == map[i + 5][j])
                                ok = false;
                        }
                    }
                    if (ok) {
                        winner = map[i][j];
                        u = i + 1;
                        v = j + 1;
                    }
                }
                //hrzt
                if (j < 15 && winner == 0) {
                    ok = true;
                    for (int k = 0; k < 5; k++) {
                        if (map[i][j] != map[i][j + k])
                            ok = false;
                    }
                    if (ok) {
                        // check 6mok
                        if (j > 0) {
                            if (map[i][j] == map[i][j - 1])
                                ok = false;
                        }
                        if (j < 18) {
                            if (map[i][j] == map[i][j + 5])
                                ok = false;
                        }
                    }
                    if (ok) {
                        winner = map[i][j];
                        u = i + 1;
                        v = j + 1;
                    }
                }
                //backslash
                if (i < 15 && j < 15 && winner == 0) {
                    ok = true;
                    for (int k = 0; k < 5; k++) {
                        if (map[i][j] != map[i + k][j + k])
                            ok = false;
                    }
                    if (ok) {
                        // check 6mok
                        if (i > 0 && j > 0) {
                            if (map[i][j] == map[i - 1][j - 1])
                                ok = false;
                        }
                        if (i < 18 && j < 18) {
                            if (map[i][j] == map[i + 5][j + 5])
                                ok = false;
                        }
                    }
                    if (ok) {
                        winner = map[i][j];
                        u = i + 1;
                        v = j + 1;
                    }
                }
                //slash
                if (i > 3 && j < 15 && winner == 0) {
                    ok = true;
                    for (int k = 0; k < 5; k++) {
                        if (map[i][j] != map[i - k][j + k])
                            ok = false;
                    }
                    if (ok) {
                        // check 6mok
                        if (i < 18 && j > 0) {
                            if (map[i][j] == map[i + 1][j - 1])
                                ok = false;
                        }
                        if (i > 4 && j < 15) {
                            if (map[i][j] == map[i - 5][j + 5])
                                ok = false;
                        }
                    }
                    if (ok) {
                        winner = map[i][j];
                        u = i + 1;
                        v = j + 1;
                    }
                }
            }
        }
    }
    cout << winner;
    if (winner > 0) {
        cout << "\n" << u << " " << v;
    }
}