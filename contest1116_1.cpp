#include <iostream>
using namespace std;

char paper[100][1000];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int y, x;
    char bx;
    bool ok = false;
    cin >> y >> x;
    for (int i = 0; i < y; i++) {
        bx = cin.get();
        for (int j = 0; j < x; j++) {
            bx = cin.get();
            paper[i][j] = bx;
        }
    }
    if (x % 2 == 0) {
        //가로 길이가 짝수면 x/2와 x/2-1는 Y / x/2+1;과 x/2-2는 W
        for (int i = 0; i < y; i++) {
            bool good = true;
            for (int j = x / 2 - 2; j <= x / 2 + 1; j++) {
                if (paper[i][j] == 'B')
                    good = false;
            }
            if (good) {
                paper[i][x / 2 - 2] = 'W';
                paper[i][x / 2 - 1] = 'Y';
                paper[i][x / 2] = 'Y';
                paper[i][x / 2 + 1] = 'W';
                ok = true;
                break;
            }
        }
    }
    else {
        //가로 길이가 홀수면 x/2가 Y, x/2+-1이 W
        for (int i = 0; i < y; i++) {
            bool good = true;
            for (int j = x / 2 - 1; j <= x / 2 + 1; j++) {
                if (paper[i][j] == 'B')
                    good = false;
            }
            if (good) {
                paper[i][x / 2 - 1] = 'W';
                paper[i][x / 2] = 'Y';
                paper[i][x / 2 + 1] = 'W';
                ok = true;
                break;
            }
        }
    }
    if (ok) {
        cout << "YES\n";
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                if (paper[i][j] == 'X') {
                    cout << 'B';
                }
                else {
                    cout << paper[i][j];
                }
            }
            cout << "\n";
        }
    }
    else {
        cout << "NO";
    }
}