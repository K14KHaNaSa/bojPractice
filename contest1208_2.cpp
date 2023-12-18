#include <iostream>
using namespace std;

char paper[210][560];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char p;
    int n, m, a, b, c;
    cin >> n >> m;
    for (int i = 0; i < n * 3; i++) {
        p = cin.get();
        for (int j = 0; j < m * 8; j++) {
            p = cin.get();
            paper[i][j] = p;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // a + b = c // d = digit (false = 1 / true = 2)
            bool d = false;
            a = int(paper[i * 3 + 1][j * 8 + 1]) - 48;
            b = int(paper[i * 3 + 1][j * 8 + 3]) - 48;
            if (paper[i * 3 + 1][j * 8 + 6] == '.') {
                c = int(paper[i * 3 + 1][j * 8 + 5]) - 48;
            }
            else {
                d = true;
                c = (int(paper[i * 3 + 1][j * 8 + 5]) - 48) * 10 + int(paper[i * 3 + 1][j * 8 + 6]) - 48;
            }
            if (a + b == c) {
                if (!d) {
                    for (int u = 0; u < 3; u++) {
                        for (int v = 0; v < 7; v++) {
                            if (!((u == 0 && v == 0) || (u == 0 && v == 6) || (u == 2 && v == 0) || (u == 2 && v == 6))) {
                                if (!(u == 1 && (v > 0 && v < 6)))
                                    paper[i * 3 + u][j * 8 + v] = '*';
                            }
                        }
                    }
                }
                else {
                    for (int u = 0; u < 3; u++) {
                        for (int v = 0; v < 8; v++) {
                            if (!((u == 0 && v == 0) || (u == 0 && v == 7) || (u == 2 && v == 0) || (u == 2 && v == 7))) {
                                if (!(u == 1 && (v > 0 && v < 7)))
                                    paper[i * 3 + u][j * 8 + v] = '*';
                            }
                        }
                    }
                }
            }
            else {
                paper[i * 3][j * 8 + 3] = '/';
                paper[i * 3 + 1][j * 8 + 2] = '/';
                paper[i * 3 + 2][j * 8 + 1] = '/';
            }
        }
    }
    for (int i = 0; i < n * 3; i++) {
        for (int j = 0; j < m * 8; j++) {
            cout << paper[i][j];
        }
        cout << "\n";
    }
}