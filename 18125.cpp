#include <iostream>
using namespace std;

int tholic[100][100];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int r, c;
    cin >> r >> c;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cin >> tholic[j][c - i - 1];
        }
    }
    int io;
    bool answer = true;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> io;
            if (tholic[i][j] != io) {
                answer = false;
            }
        }
    }
    if (answer) {
        cout << "|>___/|        /}\n| O < |       / }\n(==0==)------/ }\n| ^  _____    |\n|_|_/     ||__|";
    }
    else {
        cout << "|>___/|     /}\n| O O |    / }\n( =0= )\"\"\"\"  \\\n| ^  ____    |\n|_|_/    ||__|";
    }
}